
#include <iostream>
using namespace std;

int main(){
   int nums[]={1,1,0,1,1,1};
   int n=6; 
   int count=0;
   int maxcount=0;
   
   for(int i=0;i<n;i++){
       if(nums[i]==1){
           count++;
           if(count>maxcount){
                maxcount=count;
           }
       }else{
           count=0;
       }
   }
    cout<<maxcount;
 
     
    
    return 0;
}