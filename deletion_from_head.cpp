//WAP to delete a node from the head of the linked list

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
void delete_from_head(Node* &head){
    if(head == NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    cout<<"Node deleted from head."<<endl;
}
int main(){
    Node *head = new Node(20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    cout<<"Linked list before deletion: ";
    print_linked_list(head);
    cout<<endl;
    delete_from_head(head);
    cout<<"Linked List after deletion: ";
    print_linked_list(head);

}
