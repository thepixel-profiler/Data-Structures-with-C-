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
void insert_at_head(Node* &head, int data){
    Node *new_node = new Node(data);
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
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
    insert_at_head(head, 40);
    
    print(head);
}