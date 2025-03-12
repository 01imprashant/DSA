#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            //ans store karlo
            ans=mid;
            //left me jao
            e=mid-1;
        }
        else if(target>arr[mid]){
            //right me jao
            s=mid+1;
        }
        else if(target<arr[mid]){
            //left me jao
            e=mid-1;
        }
        //mid update kardo
        mid=s+(e-s)/2;
    }
    //ans return kardo
    return ans;
}

int main(){
    int arr[]={10,20,40,50,60,70,80,90};
    int n=8;
    int target=30;
    int finalAns=firstOccurence(arr,n,target);

    if(finalAns==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"First Occurence of element at index:"<<finalAns<<endl;
    }

    return 0;
}