//Implementation of Binary Search in C++
#include<iostream>
using namespace std;

int binary_search(int arr[], int left, int right, int tar) {
    int mid = (left + right)/2;
    if (arr[mid]==tar){
        return mid;
    }
    else if(tar > arr[mid]){
        binary_search(arr, mid+1, right, tar);
    }
    else if(tar< arr[mid]){
        binary_search(arr, left, mid-1, tar);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int tar;
    cout<<"Enter the element to be searched: ";
    cin>>tar;
    cout<<"element found at index: "<<binary_search(arr, 0,10,tar);
}
