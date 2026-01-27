//WAP to insert an element at a specific position in an array.

#include<iostream>
using namespace std;

int main(){
    int n, pos, element;
    int arr[10] = {10, 20, 30, 40, 50};
    n = 5;

    cout<<"Original array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Enter the position to insert the element (0 to "<<n<<"): ";
    cin>>pos;
    cout<<"Enter the element to insert: ";
    cin>>element;

    for(int i=n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    n++;

    cout<<"Array after insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
