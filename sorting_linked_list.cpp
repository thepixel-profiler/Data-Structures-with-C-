//WAP to sort a linked list.
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
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
void sort_linked_list(Node *&head){
    if(head == NULL || head->next == NULL){
        return;
    }
    Node *temp1 = head;
    while(temp1 != NULL){
        Node *temp2 = temp1->next;
        while(temp2 != NULL){
            if(temp1->data > temp2->data){
                int num;
                num = temp1->data;
                temp1->data = temp2->data;
                temp2->data = num;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}
int main(){
    Node *head = new Node(2);
    insert_at_tail(head, 12);
    insert_at_tail(head, 7);    
    insert_at_tail(head, 5);
    insert_at_tail(head, 89);
    insert_at_tail(head, 11);


    cout<<"Linked list before reversal: ";
    print_linked_list(head);
    cout<<endl;
    sort_linked_list(head);
    cout<<"Sorted linked list: ";
    print_linked_list(head);
}