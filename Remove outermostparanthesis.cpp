#include <iostream>
using namespace std;

int main() {
    string s = "(()())(())";   // input string of parentheses
    string ans = "";           // to store final answer
    int depth = 0;             // how many '(' are currently open

    for (char c : s) {         // take each character from s, one by one
        if (c == '(') {
            if (depth > 0) ans += c;  // skip outermost '('
            depth++;
        } else {               // c == ')'
            depth--;           // we are closing one '('
            if (depth > 0) ans += c;  // skip outermost ')'
        }
    }

    cout << ans << endl;  // print the result
    return 0;
}
