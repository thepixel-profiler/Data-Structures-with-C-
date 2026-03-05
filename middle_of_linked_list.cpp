//WAP to find the middle element of a linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void insert_at_tail(Node *&head, int val){
    Node *new_node = new Node(val);
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
void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node *head = new Node(20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);    
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    insert_at_tail(head, 70);


    cout<<"Linked list before reversal: ";
    print_linked_list(head);
    cout<<endl;
    reverse_linked_list(head);
    cout<<"Linked List after reversal: ";
    print_linked_list(head);
}