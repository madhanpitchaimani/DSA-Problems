
	
//Find the highest/lowest frequency element
//using hash map

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    
    vector<int> arr ={10, 20, 10, 30, 20, 10};
       unordered_map<int,int> freq;
       
       for(int i=0;i<arr.size();i++){
           freq[arr[i]]++;
       }
       
       int maxvalue=0 , minvalue=arr.size();
       int maxkey=arr[0],minkey=arr[0]; // any +ve or -ve numbers can be stored in array
       //if normally use maxkey=0 and minkey=0 it cannot take an -ve numbers
       for(auto it : freq){
           
           if(it.second > maxvalue){
               maxvalue=it.second;
               maxkey=it.first;
           }
           if(it.second < minvalue){
               minvalue=it.second;
               minkey=it.first;
           }
       }
       
       cout<<"The highest freq " << " "<<maxkey <<"("<<maxvalue<<")"<< "times"<<endl;
        cout<<"The Lowest freq " << " "<<minkey <<"("<<minvalue<<")"<< "times"<<endl;
}