// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <climits>
using namespace std;

void SecondLargest(vector<int> &arr,int n){
    int Largest =INT_MIN;
    int Second=INT_MIN;
    int third=INT_MIN;

   for(int i=0;i<n;i++) {
      if(arr[i] > Largest){
        third = Second;
        Second=Largest;
        Largest=arr[i];
      }
          else if (arr[i] > Second && arr[i] < Largest) {
            // update second and third
            third = Second;
            Second = arr[i];
        }
        else if (arr[i] > third && arr[i] < Second) {
            // update only third
            third = arr[i];
        }
    }
    
    if(Second==INT_MIN){
        cout<<"No second largest";
    }else{
        cout<<"The second Largest Number is"<<" "<<Second;
    }
    cout<<endl;
        if (third == INT_MIN) {
        cout << "No third largest element found." << endl;
    } else {
        cout << "Third largest element is: " << third << endl;
    }
}




int main() {
   int n;
   cout<<"Enter the Size of array :"<<" ";
   cin>>n;
   
   cout<<"Enter the Array :"<<" ";
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   SecondLargest(arr,n);
    return 0;
}