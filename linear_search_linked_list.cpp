//WAP to perform linear search in a linked list
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
void linear_search(Node *head, int find_value){
    Node *temp = head;
    int index = 0;
    while(temp!=NULL)
    {
        if(temp->data==find_value){
            cout << "Element found at position: " << index+1 << endl;
            return;
        }
        temp = temp->next;
        index++;
    }
    cout << "Element not found" << endl;
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int find_value;
    cout << "Enter the element to be searched: ";
    cin >> find_value;
    linear_search(head, find_value);
}
