#include<iostream>
using namespace std;

int lastOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            //ans store karlo
            ans=mid;
            //right me jao
            s=mid+1;
        }
        else if(target>arr[mid]){
            //right me jao
            s=mid+1;
        }
        else if(target<arr[mid]){
            //left me jao
            e=mid-1;
        }
        //mid upddate kardo
        mid=s+(e-s)/2;
    }
    //ans return kardo
    return ans;
}

int main(){
    int arr[]={10,20,30,30,30,40,40,40};
    int n=8;
    int target=40;
    int finalAns=lastOccurence(arr,n,target);

    
    if(finalAns==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Last Occurence of element at index:"<<finalAns<<endl;
    }


    return 0;
}