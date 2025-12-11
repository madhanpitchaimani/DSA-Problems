// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int vowels(string str){
      int count=0;
      string Vowels="aeiouAEIOU";
      
      int n=str.length();
      
      for(int i=0;i<n;i++){
          if(Vowels.find(str[i])!=string::npos){
              count++;
          }
      }
      
      return count;
}

int main() {
    string str;
    cout<<"enter the string";
    cin>>str;
    
cout << vowels(str);
    

    return 0;
}


// method - leetcode

#include <iostream>
#include <vector>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int countVowelWords(vector<string>& words, int left, int right){
    int count = 0;

    for(int i = left; i <= right; i++){
        string w = words[i];
        if(isVowel(w[0]) && isVowel(w[w.length()-1])){
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> words = {"are","amy","u"};
    int left = 0, right = 2;

    cout << countVowelWords(words, left, right);
}
