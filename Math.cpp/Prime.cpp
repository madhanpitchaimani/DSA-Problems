#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    // Handle cases for numbers less than 2
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a Prime number." << endl;
    else
        cout << num << " is NOT a Prime number." << endl;

    return 0;
}
