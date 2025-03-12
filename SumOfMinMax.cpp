#include<iostream>
#include<queue>
using namespace std;

int sumOfMinMax(int arr[],int size,int k){
    int ans=0;
    //Process first k element
    for(int i=0;i<k;i++){
        int element=arr[i];
        if(element>arr[q.back()]){
            q.pop();
        }
        q.push(i);
    }
}

int main(){
    
    int arr[]={2,5,-1,7,-3,-1,-2};
    int size=7;
    int k=4;
    cout<<sumOfMinMax(arr,size,k)<<endl;

    return 0;
}