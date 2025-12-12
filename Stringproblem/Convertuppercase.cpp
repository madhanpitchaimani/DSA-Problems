#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
//ASCII Rule

'a' to 'z' → 97 to 122

'A' to 'Z' → 65 to 90

To convert lowercase → uppercase:

uppercase = lowercase - 32


Because 'a' - 'A' = 32.


void touppercase(string s){
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='a' && ch<='z'){
            ch=ch-32;
        }
        cout<<ch;
    }
    
    
      }
     
int main(){
    string s;
    cout<<"Enter the string"<<" ";
    getline(cin,s);
    
    touppercase(s);
    
}