#include <iostream>
using namespace std;

// left rotate by once 
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int first = arr[0]; // store first element

    // shift elements left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first; // put first element at the end

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
