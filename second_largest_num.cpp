//WAP to find the second largest element from the array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,5,6,30,25,15};
    int n = 7;
    int max = arr[0];
    int second_max=0;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=max){
            if(arr[i]>second_max){
                second_max = arr[i];
            }
        }
    }
    cout<<endl<<"Original Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The second largest element in the array is: "<<second_max;   
}