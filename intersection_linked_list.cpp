//implement a program to find if two linked lists intersect or not and if they do then find the point of intersection.
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
Node* find_intersection(Node* head1, Node* head2){
    Node *temp1 = head1;
    Node *temp2 = head2;
    
    while(temp1 != temp2){
        if(temp1 == NULL){
            temp1 = head2;
        } else {
            temp1 = temp1->next;
        }
        if(temp2 == NULL){
            temp2 = head1;
        } else {
            temp2 = temp2->next;
        }
    }
    
    return temp1;
}
int main(){
    Node *head1 = new Node(10);
    insert_at_tail(head1, 20);
    insert_at_tail(head1, 30);
    
    Node *head2 = new Node(40);
    insert_at_tail(head2, 50);
    
    head2->next = head1->next;
    
    Node *intersection_point = find_intersection(head1, head2);
    
    if(intersection_point != NULL){
        cout<<"Intersection point found at node with value: "<<intersection_point->data<<endl;
    } else {
        cout<<"No intersection point found."<<endl;
    }
}
