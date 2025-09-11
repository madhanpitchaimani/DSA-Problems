#include <iostream>
#include <string>

using namespace std;

bool isRotation(const string &s, const string &goal) {
    if (s.length() != goal.length()) return false;

    string temp = s + s;
    return temp.find(goal) != string::npos; 
    /*!= string::npos
string::npos is a special constant representing "not found".
So temp.find(goal) != string::npos means:
"Check if goal is found in temp."
If found → temp.find(goal) returns a valid index → expression is true.
If not found → temp.find(goal) returns string::npos → expression is false.

What is string::npos?

string::npos is a constant value in C++ used with the string class.
It represents “no position” or “not found”.
Its type is size_t (an unsigned integer).
Usually, its value is the maximum value of size_t, which is effectively impossible as a valid string index.*/

int main() {
    string s1 = "abcde", goal1 = "cdeab";
    string s2 = "abcde", goal2 = "abced";

    cout << (isRotation(s1, goal1) ? "true" : "false") << endl;
    cout << (isRotation(s2, goal2) ? "true" : "false") << endl;

    return 0;
}
