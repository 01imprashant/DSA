#include<iostream>
using namespace std;

void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int arr[5];
    int size=5;
    inputArray(arr,size);
    printArray(arr,size);

    return 0;
}