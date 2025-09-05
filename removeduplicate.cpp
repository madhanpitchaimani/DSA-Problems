// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
        int arr[]={1,1,2,3};
        int n=4;
        
        int j=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                arr[j]=arr[i];
                j++;
            }
        }
        arr[j]=arr[n-1];
        j++;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    
}