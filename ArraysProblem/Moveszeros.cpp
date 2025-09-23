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


/*First loop (copy non-zeros forward):

i=0 → nums[0]=0 → skip

i=1 → nums[1]=1 → put at nums[0] → array = [1, 1, 0, 3, 12], j=1

i=2 → nums[2]=0 → skip

i=3 → nums[3]=3 → put at nums[1] → array = [1, 3, 0, 3, 12], j=2

i=4 → nums[4]=12 → put at nums[2] → array = [1, 3, 12, 3, 12], j=3

Now j=3 → means first 3 positions are filled with non-zeros.

Second loop (fill zeros from j to end):

From i=3 to end:

nums[3] = 0

nums[4] = 0

Final array =

[1, 3, 12, 0, 0]*/