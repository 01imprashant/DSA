#include<iostream>
using namespace std;

// void shiftArrayBy1InRight(int arr[],int n){
//     int temp=arr[n-1];
//     for(int i=n-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
// }

void shiftArrayBy1InLeft(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    // shiftArrayBy1InRight(arr,n);
    shiftArrayBy1InLeft(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}