//WAP to insert a node a the head of a linked list

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
void insert_at_head(Node* &head, int data){
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}
int main(){
    Node *head = new Node(20);
    insert_at_head(head, 10);
    print_linked_list(head);
}
