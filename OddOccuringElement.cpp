#include<iostream>
using namespace std;

int oddOuccringElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                //right me jao
                s=mid+2;
            }
            if(arr[mid]!=arr[mid+1]){
                //ans ko store karlo 
                ans=mid;
                //left me jao
                e=mid-1;
            }
        }
        if(mid%2==1){
            if(arr[mid]==arr[mid-1]){
                //right me jao
                s=mid+1;
            }
            if(arr[mid]!=arr[mid-1]){
                //ans ko store karlo
                ans=mid;
                //left me jao
                e=mid-2;
            }
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[]={1,1,5,5,2,2,3,3,2,4,4};
    int n=11;
    int ans=oddOuccringElement(arr,n);
    cout<<arr[ans]<<endl;

    return 0;
}