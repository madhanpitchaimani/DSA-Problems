#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    bool isPalindrome = true;

    for (int i = 0; i < n; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}


class Solution {
public:
    bool isPalindrome(string s) {
      int left=0;
      int right=s.length()-1;

      while(left<right){
        if(!isalnum(s[left])){
            left++;
            continue;
        }
        if(!isalnum(s[right])){
            right--;
            continue;
        }

        if(tolower(s[left]) != tolower(s[right])){
        return false;
        }

        left++;
        right--;
      }
      return true;


}
    
};

//leetcode problem