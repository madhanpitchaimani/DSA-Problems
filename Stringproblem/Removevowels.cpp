#include<iostream>
#include<string>
using namespace std;

bool isVowels(char c){
    c=tolower(c);
    return(c=='a'||c == 'e'||c=='i'||c=='o'||c=='u');
}
void Removevow(string s){
    
    for(int i=0;i<s.length()-1;i++){
        if(!isVowels(s[i])){
            cout<<s[i];
        }
    }
    
}

int main(){
    string s;
    cout<<"Enter the string"<<" ";
    getline(cin,s);
    
    Removevow(s);
    
}




