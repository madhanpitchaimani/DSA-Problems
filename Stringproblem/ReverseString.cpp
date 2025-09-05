// Online C++ compiler to run C++ program online
#include <iostream>
#include<sstream>
#include<vector>
using namespace std;
int main() {
    
    string s ="the sky is blue";
    stringstream ss(s);
    string word;
    vector<string> words;
    
    while(ss >> word){
        words.push_back(word);
    }
    
    for(int i=words.size()-1;i>=0;i--){
        cout<<words[i] << " ";
     
    }
   

    return 0;
}