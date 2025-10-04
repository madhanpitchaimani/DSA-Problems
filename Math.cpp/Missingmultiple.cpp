#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the maximum number in range (n): ";
    cin >> n;

    int m; // number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> m;

    vector<int> arr(m);
    cout << "Enter the array elements: ";
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    // Step 1: Create boolean array to mark presence
    vector<bool> present(n + 1, false); // index 0 unused

    // Step 2: Mark the numbers present in the array
    for (int i = 0; i < m; i++) {
        int num = arr[i];
        if (num >= 1 && num <= n) { // only mark numbers in range
            present[num] = true;
        }
    }

    // Step 3: Find missing numbers
    cout << "Missing numbers: ";
    for (int i = 1; i <= n; i++) {
        if (!present[i]) { // if still false → missing
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
