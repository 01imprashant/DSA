#include<iostream>
using namespace std;
int main(){

    // //allocate using new keyword
    // int *ptr1=new int(5);
    // cout<<*ptr1<<endl;
    // //allocate using malloc
    // int *ptr2=(int*) malloc(4);
    // *ptr2=5;
    // cout<<*ptr2<<endl;

    // //1D allocation using new keyword
    // int *arr1=new int[5];
    // //1D allocation using malloc 
    // int *arr2=(int*)malloc(5*sizeof(int));

    // for(int i=0;i<5;i++){
    //     int n;
    //     cin>>n;
    //     arr1[i]=n;
    //     arr2[i]=n;
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr1[i]<<" "<<arr2[i]<<endl;
    // }
    // delete[] arr1;
    // free(arr2);

    //2D allocation using new keyword
    int rows=5;
    int cols=5;
    int **ptr1=new int*[rows];
    for(int i=0;i<rows;i++){
        ptr1[i]=new int[cols];
    }
    //2D alllocation using malloc


    return 0;
}