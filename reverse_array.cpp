//Finding the reverse of an array

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int start=0;
    int end=4;
    cout<<"Original array: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
    cout<<endl<<"Reversed array: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}