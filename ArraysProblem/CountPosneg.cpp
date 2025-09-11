// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
      vector<int>arr={-2,-1,-1,1,2,3};
      int n=arr.size();
      int positiveCount=0;
      int negativeCount=0;
      
      for(int i=0;i<n;i++){
          if(arr[i]<0) negativeCount++;
          else if(arr[i]>0) positiveCount++;
      }
   cout<<"The Positive count is"<<" "<<positiveCount<<endl;;
      cout<<"The Negative count is"<<" "<<negativeCount<<endl;;
    return 0;
}