#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;
    //function call
    printArray(arr,size);

    // // Array creation
    // int arr[101];
    // char ch[49];
    // float decimal[90];
    // long num1[67];
    // short num2[34];
    // double num3[34];

    // cout<<"Array is created successfully"<<endl;

    // int a=5;
    // cout<<"Address of a:"<< &a <<endl;

    // int arr[10];
    // cout<<"Address of arr:"<< &arr <<endl;
    // cout<<"Address of arr:"<< arr <<endl;


    // int arr[5]={2,4,6,8,10};
    // int brr[]={2,4,3,6,7,5};
    // int crr[5]={2,4};
    // int drr[2]={1,2,3,4,5};
    

    // //Printing an arry
    // int arr[5]={1,2,3,4,5};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;

    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    

    // //Taking input in an array
    // int arr[5];
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the Value for index "<<i<<":"<<" ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    
    // cout<<"Printing an Array:";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    // //Problem statement-1
    // //taking input in an arary
    // int arr[10];
    // int n=10;
    // cout<<"Taking input in an array:";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // //doubling the value of an array
    // for(int i=0;i<n;i++){
    //     arr[i]=arr[i]*2;
    // }
    
    // //printing an array
    // cout<<"Printing the double value of an array:";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    // int arr[5];
    // int n=5;
    // cout<<"Enter the input:";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[i];
    // }
    // cout<<"Sum is:"<<sum;



    return 0;
}