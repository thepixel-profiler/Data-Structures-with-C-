//Bubble sort
#include <iostream>
using namespace std;

int bubble_sort(int arr[], int n){
    for(int j=0; j<n-r-1; j++){
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
int main(){
    int arr[] = {10,20,69,23,12,78,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
