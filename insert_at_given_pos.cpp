//WAP to insert a node at a given position in a linked list
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

void insert_at_position(Node* &head, int data, int position){
    Node *new_node = new Node(data);
    if(position == 1){
        new_node->next = head;
        head = new_node;
        return;
    }
    Node *temp = head;
    for(int i=1; i<position-1; i++){
        if(temp == NULL){
            cout<<"Position out of bounds"<<endl;
            return;
        }
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

int main(){
    Node *head = new Node(10);
    insert_at_position(head, 20, 1);
    insert_at_position(head, 15, 1);
    insert_at_position(head, 5, 0);
    print_linked_list(head);
}
