//WAP to implement quick sort algorithm using array.
#include <iostream>
using namespace std;

void quick_sort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int s=low;
    int e=high;
    int m=s+(e-s)/2;

    int pivot=arr[m];
    while(s<=e){
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }
        if(s<=e){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    quick_sort(arr, low, e);
    quick_sort(arr, s, high);
}
int main(){
    int arr[5] = {10,40,30,20,60};
    cout<<"Array before sorting: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quick_sort(arr, 0, 4);
    cout<<"Sorted array: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}