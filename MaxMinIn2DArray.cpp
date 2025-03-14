#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][4],int row,int col){
    int maxAns=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}


int findMin(int arr[][4],int row,int col){
    int minAns=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minAns){
                minAns=arr[i][j];
            }
        }
    }
    return minAns;
}



int main(){

    int arr[][4]={{1,2,600,4},{2,3,90,5},{6776,5,6,7}};
    int row=3;
    int col=4;
    cout<<"Maximum element is:"<<findMax(arr,row,col);
    cout<<endl;
    cout<<"Minimum element is:"<<findMin(arr,row,col);
    


    return 0;
}