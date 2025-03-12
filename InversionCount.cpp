#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr,vector<int> &temp,int s,int mid,int e){
    int i=s;
    int j=mid+1;
    int k=s;
    int count=0;
    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
            count=count+(mid-i+1);
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=e){
        temp[k]=arr[j];
        k++;
        j++;
    }
    while(s<=e){
        arr[s]=temp[s];
        s++;
    }

    return count;
}

int mergeSort(vector<int> &arr,vector<int> &temp,int s,int e){
    //Base case
    if(s>=e){
        return 0;
    }
    int mid=s+(e-s)/2;
    int count=0;
    count=count+mergeSort(arr,temp,s,mid);
    count=count+mergeSort(arr,temp,mid+1,e);
    count=count+merge(arr,temp,s,mid,e);
    return count;
}

int main(){
    vector<int> arr={8,4,2,1};
    vector<int> temp(arr.size(),0);
    int s=0;
    int e=arr.size()-1;
    int count=mergeSort(arr,temp,s,e);
    cout<<"Inversion Count:"<<count<<endl;


    // int arr[]={8,4,2,1};
    // int n=4;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             count++;
    //         }
    //     }
    // }
    // cout<<"Inversion Count:"<<count<<endl;

    return 0;
}