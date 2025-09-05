#include <iostream>
#include <vector>
using namespace std;
 void moveszeros(vector<int>& nums){
     
     int j=0;
       
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=0){
              nums[j]=nums[i];
              j++;
           }
           
       }
       
       for(int i=j;i<nums.size();i++){
            nums[i] =0;
           
       }
 }
int main() {
    vector<int> arr={0,1,0,3,12};
    moveszeros(arr);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}