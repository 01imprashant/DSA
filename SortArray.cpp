#include<iostream>
using namespace std;

void sort(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
       if(arr[l]<0){
        l++;
       }
       else if(arr[h]>0){
        h--;
       }
       else{
        swap(arr[l],arr[h]);
       }
    }
}

int main(){
    int arr[9]={2,4,6,-7-12,-234,45,24,454};
    int size=9;
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}