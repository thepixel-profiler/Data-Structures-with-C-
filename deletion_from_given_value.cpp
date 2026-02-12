//WAP to delete a given data/value from the linked list.
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
void print_linked_list(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
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
void delete_given_val(Node* &head, int val){
    Node *temp = head;
    Node *temp1 = NULL;
    while(temp != NULL){
        if(temp->data == val){
            if(temp1 == NULL){
                head = head->next;
            } else {
                temp1->next = temp->next;
            }
            delete temp;
            return;
        }
        temp1 = temp;
        temp = temp->next;
        }
} 
int main(){
    Node *head = new Node(20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    cout<<"Linked list before deletion: ";
    print_linked_list(head);
    cout<<endl;
    delete_given_val(head, 20);
    cout<<"Linked List after deletion of the given value: ";
    print_linked_list(head);
}
