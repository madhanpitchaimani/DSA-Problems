#include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 0, 1};
    int n = 3;

    int total = n * (n + 1) / 2;  // sum of numbers from 0 to n
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int missing = total - sum;
    cout << "Missing number: " << missing << endl;

    return 0;
}
