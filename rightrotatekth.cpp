// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int nums[]={1,2,3,4,5,6,7};
  int n=7;
  int k=3;
  int temp[k];
  
    for(int i=0;i<k;i++){
       temp[i]=nums[n-k+i];
       
    }
    
    for(int i=n-k-1;i>=0;i--){
        nums[i+k]=nums[i];
    }
    
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    return 0;
}