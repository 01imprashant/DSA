#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int totalOccur(int arr[],int n,int target){
    int firstOccur=firstOccurence(arr,n,target);
    int lastOccur=lastOccurence(arr,n,target);
    int totalOccur=lastOccur-firstOccur+1;
    return totalOccur;
}

int main(){
    int arr[]={20,20,20,20,30,30,40,50};
    int n=8;
    int target=20;
    int finalAns=totalOccur(arr,n,target);

    if(finalAns==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Total Occurence of element is:"<<finalAns<<endl;
    }


    return 0;
}