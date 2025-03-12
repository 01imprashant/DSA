#include<iostream>
using namespace std;

void findMissingElement(int arr[],int n){
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            continue;
        }
        else{
            cout<<i+1<<" ";
        }
    }
}

int main(){
    int arr[]={2,3,5,3,1};
    int n=sizeof(arr)/sizeof(int);
    findMissingElement(arr,n);
}