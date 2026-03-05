//WAP to write the code for implementing the concept of circular queue
#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;
    public: 
        Queue(int size){
            arr=new int[size];
            capacity = size;
            front=0;
            rear=-1;
            count=0;
        }
        void enqueue(int item){
            if(isfull()){
                cout<<"Queue is full. Cannot Enqueue "<<item<<endl;
                return;
            }
            rear = (rear+1)%capacity;
            arr[rear] = item;
            count++;
        }
        int dequeue(){
            if(isEmpty()){
                cout<<"The queue is empty. Cannot dequeue"<<endl;
                return -1; 
            }
            int item=arr[front];
            front=(front+1)%capacity;
            count--;
            return item;
        }
        int peek(){
            if(isEmpty()){
                cout<<"Queue is empty. "<<endl;
                return -1;
            }
            return arr[front];
        }
        int size(){
            return count;
        }
        bool isEmpty(){
            return (count==0);
        }
        bool isFull(){
            return (count==capacity);
        }
};
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"Front Element: "<<q.peek()<<endl;
    cout<<"Dequeued: "<<q.dequeue()<<endl;
    cout<<"Dequeued: "<<q.dequeue()<endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    while(!q.isEmpty()){
        cout<<q.dequeue()<<" ";
    }
    cout<<endl;

    return 0;
}