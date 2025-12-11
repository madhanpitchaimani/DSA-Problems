//Sorting array

#include <iostream>
#include<vector>
using namespace std;
int main() {
   int arr[]={5,8,1,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(arr[i]>arr[j]){
              int temp =arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
   }
   
   for(int i=0;i<n;i++){
      
       cout<< arr[i]<<" ";
       
   }
   

    return 0;
}



// get input as an array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);   // ✅ safe dynamic array

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//bool type check sorted or not

#include <iostream>
#include<vector>
using namespace std;

bool Sortedarray(vector<int> &arr,int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]) return false;
        }
    }
    return true;
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
  
  cout<<(Sortedarray(arr,n)? "Sorted":"Not Sorted" );
      

    return 0;
}
