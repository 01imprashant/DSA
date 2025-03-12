#include<iostream>
using namespace std;

bool findTarget(int arr[][4],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[][4]={{10,20,30,55},{40,50,60,34},{70,80,90,100}};
    int row=3;
    int col=4;
    int target=70;
    cout<<"Found or Not:"<<findTarget(arr,row,col,target);
  

}