#include<iostream>
using namespace std;

void mergeInPlace(vector<int> &arr,int s,int mid,int e){
    int totalLen=e-s+1;
    int gap=(totalLen/2)+(totalLen%2);
    while(gap>0){
        int i=s;
        int j=s+gap;
        while(j<=e){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
            i++;
            j++;
        }
        gap=gap<=1?0:(gap/2)+(gap%2);
    }
}

void mergeSort(vector<int> &arr,int s,int e){
    //Base Case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    mergeInPlace(arr,s,mid,e);
}

int main(){
    vector<int> arr={2,1,6,9,4,5,8};

    cout<<"Before MergeSort:";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,0,arr.size()-1);
    cout<<endl;
    cout<<"After MergeSort:";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}