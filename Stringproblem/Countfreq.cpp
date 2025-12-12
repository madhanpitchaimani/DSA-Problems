#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;


void countwords(string s){
    
      int count=0;
      
      stringstream ss(s);
      string word;
      
      
      while(ss >> word){
          count++;
      }
      
      cout<<count;
      
    
}

int main(){
    string s;
    cout<<"Enter the string"<<" ";
    getline(cin,s);
    
    countwords(s);
    
}