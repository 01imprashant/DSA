#include<iostream>
using namespace std;

int searchInNearlySortedArrya(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid]==target){
            return mid;
        }
        if(mid+1<n && arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            //right me jao
            s=mid+2;
        }
        else{
            //left me jao
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target=20;
    int found=searchInNearlySortedArrya(arr,n,target);

    if(found!=-1){
        cout<<"Target found at index:"<<found<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}

