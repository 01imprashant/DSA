#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int x){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        else if(x>arr[mid]){
            //right me jao
            s=mid+1;
        }
        else{
            //left me jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int expoSearch(int arr[],int n,int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=x){
        i=i*2;
    }
    return binarySearch(arr,i/2,min(i,n-1),x);
}

int main(){
    int arr[]={2,4,5,6,11,13,14,15,56,70};
    int n=sizeof(arr)/sizeof(int);
    int x=13;
    int ans=expoSearch(arr,n,x);
    cout<<"Index is:"<<ans<<endl;

    return 0;
}