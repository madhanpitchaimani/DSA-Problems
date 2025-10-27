#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Example input
    vector<string> words = {"flower", "flow", "flight"}; // vector <string> to store multiple string

    string prefix = "";

    // Take the first word as reference
    for (int i = 0; i < words[0].size(); i++) {
        //multiple string
        char c = words[0][i];   // pick each character from first word

        // Check if this character matches in all words
        bool match = true;
        for (int j = 1; j < words.size(); j++) {
            // If index exceeds size OR characters mismatch
            if (i >= words[j].size() || words[j][i] != c) {
                match = false;
                break;
            }
        }

        if (match)
            prefix += c;   // add this character to prefix
        else
            break;         // stop if mismatch found
    }

    cout << "Longest Common Prefix: " << prefix << endl;
    return 0;
}
