#include<iostream>
#include<limits.h>
using namespace std;

int minimumInArray(int arr[],int size){

    int minAns=INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns=arr[i];
        }
    }
    return minAns;
}

int maximumInArray(int arr[],int size){

    int maxAns=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns=arr[i];
        }
    }
    return maxAns;
}

int main(){
    
   int arr[]={10,20,39,-100,48,1,3,-76,7,-98};
   int size=10;
   int minimum=minimumInArray(arr,size);
   cout<<"Minimum number in an Array is:"<<minimum<<endl;
   int maximum=maximumInArray(arr,size);
   cout<<"Maximum number in an Array is:"<<maximum<<endl;


   return 0;
}