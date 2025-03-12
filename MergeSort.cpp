#include<iostream>
using namespace std;

void merge(int arr[],int s,int e,int mid){
    int lenLeft=mid-s+1;
    int lenRight=e-(mid+1)+1;
    //create left and right array
    int *left=new int [lenLeft];
    int *right=new int [lenRight];
    //Copies values in left and right array from original array
    int k=s;
    for(int i=0;i<lenLeft;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<lenRight;i++){
        right[i]=arr[k];
        k++;
    }
    //actual merge ka logic yaha hai
    //left array is already sorted hai
    //right array is already sorted hai
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;
    while(leftIndex<lenLeft && rightIndex<lenRight){ 
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArrayIndex]=left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex]=right[rightIndex];
            mainArrayIndex++;
            rightIndex++; 
        }
    }
    while(rightIndex<lenRight){
        arr[mainArrayIndex]=right[rightIndex];
        mainArrayIndex++;
        rightIndex++;

    }
    while(leftIndex<lenLeft){
        arr[mainArrayIndex]=left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }
    delete[]left;
    delete[]right;

}

void mergeSort(int arr[],int s,int e){
    //Base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e,mid);
}

int main(){
    int arr[]={2,1,6,9,4,5,8};
    int size=7;
    int s=0;
    int e=size-1;

    cout<<"Printing before Merge sort:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; 
    }

    cout<<endl;

    mergeSort(arr,s,e);

    cout<<"Printing after Merge sort:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;

    return 0;
}