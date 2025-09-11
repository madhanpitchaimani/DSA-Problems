#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, int> freq;

    // Count characters of s
    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    // Compare with t
    for (int i = 0; i < t.length(); i++) {
        char c = t[i]; // pick character one by one from t

        if (freq.find(c) == freq.end() || freq[c] == 0) {
            return false; // char not found or used up
        }

        freq[c]--; // use one occurrence
    }

    return true; // all characters matched
}

int main() {
    string s1 = "anagram", t1 = "nagaram";
    string s2 = "rat", t2 = "car";

    cout << (isAnagram(s1, t1) ? "true" : "false") << endl; // true
    cout << (isAnagram(s2, t2) ? "true" : "false") << endl; // false
}
