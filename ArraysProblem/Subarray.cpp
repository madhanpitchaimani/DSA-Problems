#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=33;
    
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
            sum=sum+arr[end];
            
            if(sum==target){
                
                for(int k=start;k<=end;k++){
                    cout<<arr[k]<<" ";
                }
            }
        }
    }
}

//output 20, 3, 10