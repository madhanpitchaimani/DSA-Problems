#include <iostream>
#include<vector>
using namespace std;

void Reversearray(vector<int> &arr,int n){
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
  int n;
  cout<<"Enter the size of array :" << " ";
  cin>>n;
  
  cout<<"Enter the Array"<<endl;
   vector<int> arr(n);
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  cout<<"The Reverse array"<<endl;
  Reversearray(arr,n);

    return 0;
}
