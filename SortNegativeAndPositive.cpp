#include<iostream>
using namespace std;

void sortNegativeInOneSide(int arr[],int n){
    int j=0;
    for(int index=0;index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}



// void sortNegativeInOneSide(int arr[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         if(arr[i]<0){
//             i++;
//         }
//         if(arr[j]>0){
//             j--;
//         }
//         if(arr[i]>0 && arr[j]<0){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }

int main(){
    int arr[]={1,-7,-12,-10,-11,40,60};
    int n=7;
    sortNegativeInOneSide(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}