#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
    // Step 1: If lengths are different, cannot be isomorphic
    if (s.length() != t.length()) return false;

    // Step 2: Create maps for both directions
    unordered_map<char, char> mapST; // s -> t
    unordered_map<char, char> mapTS; // t -> s

    // Step 3: Loop through each character
    for (int i = 0; i < s.length(); i++) {
        char c1 = s[i]; // character from s
        char c2 = t[i]; // character from t

        // Check s -> t mapping
        if (mapST.count(c1) && mapST[c1] != c2)
            return false;

        // Check t -> s mapping
        if (mapTS.count(c2) && mapTS[c2] != c1)
            return false;

        // Store mapping if not already present
        mapST[c1] = c2;
        mapTS[c2] = c1;
    }

    // If loop finishes without conflicts, strings are isomorphic
    return true;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (isIsomorphic(s, t)) {
        cout << "Strings are isomorphic." << endl;
    } else {
        cout << "Strings are NOT isomorphic." << endl;
    }

    return 0;
}
