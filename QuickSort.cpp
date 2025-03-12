#include<iostream>
using namespace std;

void quickSort(int arr[],int start,int end){
    //Base case
    if(start>=end){
        return;
    }
    int pivot=end;
    int i=start-1;
    int j=start;
    while(j<=pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    
    // //Recursive call
    quickSort(arr,start,i-1);
    quickSort(arr,i+1,end);

}

int main(){
    int arr[]={7,2,1,8,6,3,5,4};
    int size=8;
    int start=0;
    int end=size-1; 
    cout<<"Printing before quick sort:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,start,end);
    cout<<"Printing after quick sort:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}