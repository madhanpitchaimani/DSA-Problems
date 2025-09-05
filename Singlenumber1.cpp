// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
      int nums[]={2,2,1};
      int n=3;
      
      int result=0;
       
       for(int i=0;i<n;i++){
           result=result^nums[i];//xor a ^ a = 0 (same numbers                              cancel out)a^0=a
       }
           cout<<result;
       
    return 0;
}