//implementation of linear search in C++
#include <iostream>
using namespace std;
int linear_search(int find, int arr_vals[], int n, int index=0){
    if(arr_vals[index]==find){
        cout << "Element found at index: " << index;
        return index;
    }
    else{
        cout<< "Element not found";"
    }
    linear_search(find, arr_vals, n, index+1);
}
int main(){
    int arr_vals [] = {1,3,6,9,4,10,12,90,11,56};
    int n = sizeof(arr_vals);
    int find;
    cout << "Enter the element to be searched: ";
    cin >> find;
    linear_search(find, arr_vals, n);
}