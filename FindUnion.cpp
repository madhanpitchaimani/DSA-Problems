
#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int n1 = 5, n2 = 4;
    
    int unionarr[100];
    int k=0;
    for(int i=0;i<n1;i++){
            unionarr[k]=arr1[i];
            k++;
            
    }
    for(int i=0;i<n2;i++){
        bool found=false;
        for(int j=0;j<k;j++){
               if(unionarr[j]==arr2[i]){
                   found=true;
                   break;
               }
        }
        if(!found){
             unionarr[k]=arr2[i];
             k++;
        }
    }
    
    for(int i=0;i<k;i++){
        cout<<unionarr[i]<< " ";
    }
    
    return 0;
}