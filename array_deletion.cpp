//WAP to delete an element from a specific position in an array.
#include <iostream>
using namespace std;

int main(){
    int n, pos;
    int arr[10] = {10, 20, 30, 40, 50};
    n = 5;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Enter the position to delete the element (0 to " << n-1 << "): ";
    cin >> pos;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}