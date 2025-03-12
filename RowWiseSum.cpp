#include<iostream>
using namespace std;

void  rowWiseSum(int arr[][4],int row,int col){
    
    for(int i=0;i<row;i++){
    int sum=0;
      for(int j=0;j<col;j++){
        sum=sum+arr[i][j];
      }
      cout<<"Sum of row"<<i<<":"<<sum<<endl;
    }
}

void  colWiseSum(int arr[][4],int row,int col){
    
    for(int i=0;i<col;i++){
    int sum=0;
      for(int j=0;j<row;j++){
        sum=sum+arr[j][i];
      }
      cout<<"Sum of col"<<i<<":"<<sum<<endl;
    }
}

void diagonalWiseSum(int arr[][3],int row,int col){
  int sum=0;
  for(int i=0;i<row;i++){
   sum=sum+arr[i][i];
  }
  cout<<"Sum of diagonal:"<<sum<<endl;
}

int main(){
    int arr[][4]={{1,2,3,4},{2,3,4,5},{4,5,6,7}};
    int row=3;
    int col=4;
    rowWiseSum(arr,row,col);
    colWiseSum(arr,row,col);
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    diagonalWiseSum(arr,row,col);
  

  return 0;
}