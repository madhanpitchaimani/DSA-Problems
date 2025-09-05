// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int nums[]={1,2,3,4,5,6,7};
  int n=7;
  int d=2;
  int temp[d];
  
   for(int i=0;i<d;i++){
        temp[i]=nums[i];
   }
   
   for(int i=d;i<n;i++){
          nums[i-d]=nums[i];
   }
   
   for(int i=0;i<d;i++){
       nums[n-d+i] =temp[i];
   }
  
    
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    return 0;
}