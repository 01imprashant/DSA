#include<iostream>
using namespace std;

// void printArray(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


int main(){

    // int a[]={1,2,3,4,5,6,7,8,9};

    // int arr[][3]={{1,2,3},{5,6,7},{2,4,6},{3,5,7}};
    // int row=4;
    // int col=3;

    // printArray(arr,row,col);

    // // Row wise access
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //col wise access
    // for(int i=0;i<col;i++){
    //    for(int j=0;j<row;j++){
    //        cout<<arr[j][i]<<" ";
    //    }
    //    cout<<endl;
    // }


    // int arr[3][3];
    // int row=3;
    // int col=3;
    
    // //taking input in an array row wise
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<"Enter row index:"<<i<<" "<<"Column index:"<<j<<endl;
    //         cin>>arr[i][j];
    //     }
    // }

    // printArray(arr,row,col);
    
    // //taking input in an array col wise
    //   for(int i=0;i<col;i++){
    //     for(int j=0;j<row;j++){
    //         cout<<"Enter column index:"<<i<<" "<<"row index:"<<j<<endl;
    //         cin>>arr[j][i];
    //     }
    // }

    // printArray(arr,row,col);


    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;

    // //print diagonal of 2D-matrix
    // int i=0;
    // int j=col-1;
    // for(;j>=0;j--){
    //     cout<<arr[i][j]<<" ";
    //     i++;
    // }

    //printing diagonal of a matrix
    int i=row-1;
    int j=0;
    for(;j<3;j++){
        cout<<arr[i][j]<<" ";
        i--;
    }


    return 0;
}