//WAP to implement merge sort in linked list
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
void merge_sort(Node* &head){
    //writing code to merge sort a linked list
    if(head == NULL || head->next == NULL){
        return;
    }
    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *head1 = head;
    Node *head2 = slow->next;
    slow->next = NULL;
    merge_sort(head1);
    merge_sort(head2);
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *temp3 = NULL;
    if(temp1->data < temp2->data){
        temp3 = temp1;
        temp1 = temp1->next;
    } else {
        temp3 = temp2;
        temp2 = temp2->next;
    }
    Node *new_head = temp3;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data < temp2->data){
            temp3->next = temp1;
            temp1 = temp1->next;
        } else {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }
    if(temp1 != NULL){
        temp3->next = temp1;
    }
    if(temp2 != NULL){
        temp3->next = temp2;
    }
    head = new_head;
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
    merge_sort(head);
    cout<<"Sorted linked list: ";
    print_linked_list(head);
}