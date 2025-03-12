#include<iostream>
using namespace std;

void shiftArrayBy2(int arr[],int n){
    int temp[]={arr[n-1],arr[n-2]};
    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-2];
    }
    // arr[0]=arr[n-1];
    // arr[1]=arr[n-2];
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    shiftArrayBy2(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}