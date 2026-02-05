//WAP to insert node at the tail of a doubly linked list
//WAP to create and insert an element at the head of a doubly linked list
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_at_tail(Node* &head, int data){
    Node *new_node = new Node(data);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}
void print(Node *head){
    Node *temp = head;
    cout<<"The linked list is: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node *head = new Node(20);
    insert_at_tail(head, 50);
    
    print(head);
}