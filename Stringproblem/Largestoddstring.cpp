#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos = -1; // to store position of last odd digit

    // Step 1: traverse from right side
    for (int i = s.size() - 1; i >= 0; i--) {
        int digit = s[i] - '0';  // convert character → number
        if (digit % 2 == 1) {    // check if odd
            pos = i;
            break;  // stop at first odd (from right)
        }
    }

    // Step 2: if no odd digit found
    if (pos == -1) {
        cout << "" << endl;  // no answer
    } else {
        // Step 3: take substring from 0 to pos
        cout << s.substr(0, pos + 1) << endl;
    }
}
