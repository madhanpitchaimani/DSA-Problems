// Linear search
#include <iostream>
using namespace std;

int main(){
    int arr[]={2,4,6,8,10};
    int n=5;
    int x=8;
    
    for(int i=0;i<n;i++){
   
        if(arr[i]==x){
            cout<<i<<endl;
        }
    }
    return 0;
}