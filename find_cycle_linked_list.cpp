//implementing Floyd’s Cycle Detection Algorithm (Tortoise and Hare Algorithm) to find if a cyce exists in a linked list.
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
void insert_at_tail(Node* &head, int data){
    Node *new_node = new Node(data);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
 
bool find_cycle_start(Node* head){
    Node *slow = head;
    Node *fast = head;
    
    // Step 1: Detect if a cycle exists
    while(fast != NULL && fast->next != NULL){
        slow = slow->next; // Move slow by 1
        fast = fast->next->next; // Move fast by 2
        
        if(slow == fast){ // Cycle detected
            return true;
        }
    }
    
    // If no cycle is detected, return false
    return false;
}
int main(){
    Node *head = new Node(10);
    insert_at_tail(head, 20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    
    // Creating a cycle for testing
    head->next->next->next->next = head->next; // Creating a cycle (40 -> 20)
    
    if(find_cycle_start(head)){
        cout<<"Cycle detected in the linked list."<<endl;
    } else {
        cout<<"No cycle detected in the linked list."<<endl;
    }
}