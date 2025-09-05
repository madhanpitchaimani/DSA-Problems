#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    
    int rev=0;
    
    while(num>0){
        int digit = num%10;
        rev=rev*10+digit;
        num/=10;
    }
    cout<< rev;
     
}