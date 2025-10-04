#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: ";
    getline(cin, str);   // take full input including spaces

    unordered_map<char, int> freq;

    // Count frequency but skip spaces
    for (char ch : str) {
        if (ch != ' ')   // ignore spaces
            freq[ch]++;
    }

    // Print frequencies
    cout << "Character frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
