//WAP to implement insertion and deletion in queue
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
class Queue{
    private:
        Node* front;
        Node* rear;
    public:
        //Constructor to initialize the queue
        Queue(){
            front=rear=NULL;
        }
        //Checking if the queue is empty
        bool isEmpty(){
            return (front==NULL);
        }
        //Enqueue operation to add an element to the rear of the queue
        void enqueue(int value){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = NULL;

            if(rear == NULL){
                front = rear = newNode;
                return;
            }
            rear->next = newNode;
            rear = newNode;
        }
        //Dequeue operation to remove an element from the front of the queue
        void dequeue(){
            if(isEmpty()){
                cout<<"Queue underflow. Can't delete from an empty queue."<<endl;
                return;
            }
            Node* temp = front;
            front = front->next;
            if(front == NULL){
                rear = NULL;
            }
            delete temp;
        }
        //Peek operation to view the front element of the queue without removing it
        int peek(){
            if(isEmpty()){
                cout<<"Queue underflow."<<endl;
                return -1;
            }
            return front->data;
        }
        //Display the elements in the queue
        void display(){
            if(isEmpty()){
                cout<<"Queue underflow. Can't display an empty queue."<<endl;
                return;
            }
            Node* temp = front;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Queue after enqueuing 10, 20, 30: ";
    q.display();

    cout<<"Front element: "<<q.peek()<<endl;

    q.dequeue();
    cout<<"Queue after dequeuing: ";
    q.display();

    cout<<"Front element after dequeuing: "<<q.peek()<<endl;

    return 0;
}