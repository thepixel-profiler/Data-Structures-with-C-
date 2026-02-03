//WAP to create a linked list
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
int main(){
    Node *head = new Node(20);
    Node *second = new Node(30);
    head->next = second;
    Node *third = new Node(40);
    second->next = third;
    print_linked_list(head);
}
