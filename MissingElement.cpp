#include<iostream>
using namespace std;

int missingElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int diff=arr[mid]-mid;
        if(diff==1){
            s=mid+1;
        }
        else{
         ans=mid;
         e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=9;
    int finalAns=missingElement(arr,n);

    if(finalAns==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Missng Element index:"<<finalAns<<endl;
    }
}