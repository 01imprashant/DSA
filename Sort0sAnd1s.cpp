#include<iostream>
using namespace std;

// void sortZeroOne(int arr[],int n){
//     int zeroCount=0;
//     int oneCount=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }
//     while(zeroCount--){
//         cout<<"0"<<" ";
//     }
//     while(oneCount--){
//         cout<<"1"<<" ";
//     }
// }


void sortZeroOne(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<right){
        if(arr[left]==0){
            left++;
        }
        if(arr[right]==1){
            right--;
        }
        if(arr[left]!=0 && arr[right]!=1){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }

    }

    //printing an array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[]={1,0,1,0,1,0,1,0,1,0};
    int n=10;
    sortZeroOne(arr,n);

    return 0;
}