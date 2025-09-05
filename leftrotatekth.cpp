#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 3;

    // Make sure k is within range
    k = k % n;  

    // Step 1: Store first k elements in a temporary array
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Step 2: Shift remaining elements left
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    // Step 3: Put back the stored elements at the end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    // Print result
    cout << "Array after " << k << " left rotations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
