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

// 2-method

#include <iostream>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length()) 
        return false;

    int count[256] = {0}; // for all ASCII chars

    for (int i = 0; i < str1.length(); i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) 
            return false;
    }
    return true;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (areAnagrams(s1, s2))
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are NOT anagrams." << endl;

    return 0;
}
