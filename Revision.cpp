#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


// int fact(int n){
//     //Base case
//    if(n==1 ||n==0)
//    return 1;
  
//    //Recursive relation
//    int ans=n*fact(n-1);

//    return ans;
   
// }



// void printCounting(int n){
//     //Base case
//     if(n==0)
//     return;

//     //Recursive call
//     printCounting(n-1);

//     //Processing
//     cout<< n <<" ";
// }



// int power(int n){
//     //Base case
//     if(n==0)
//     return 1;
//     //Recursive call
//     int ans=2*power(n-1);
//     return ans;
// }



// int fib(int n){
//     //Base case
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;
//     //Recursive call
//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }



// int sum(int n){
//    //Base case
//    if(n==1)
//    return 1;
//    //Recursive call
//    int ans=n+sum(n-1);
//    return ans; 
// }



// void findMini(int arr[],int size,int index,int& mini){
//     //Base case
//     if(index>=size)
//        return;
//     //Processing   
//     mini=min(mini,arr[index]);

//     //Recarsive call
//     findMini(arr,size,index+1,mini);
// }



// void findMaxi(int arr[],int size,int index,int& maxi){
//     //Base case
//     if(index>=size)
//        return;
//     //Processing   
//     maxi=max(maxi,arr[index]);

//     //Recarsive call
//     findMaxi(arr,size,index+1,maxi);
// }



// void twice(int arr[],int size,int index){
//     //Base case
//     if(index>=size){
//         return;
//     }
//     //Processing
//     arr[index]=2*arr[index];

//     cout<<arr[index]<<" ";

//     //Recursive call
//     twice(arr,size,index+1);

// }

// int found(int arr[],int size,int index,int target){
//     //Base case
//     if(index>=size)
//     return -1;
    
//     //Processing
//     if(arr[index]==target)
//     return index;

//     //Recursive call
//     found(arr,size,index+1,target);

// }


// int findOcc(int arr[],int size,int index,int target,vector<int>& ans){
//     //Base case
//     if(index>=size)
//     return -1;
    
//     //Processing
//     if(arr[index]==target)
//     ans.push_back(index);

//     //Recursive call
//     findOcc(arr,size,index+1,target,ans);

// }



// void findEven(int arr[],int size ,int index,vector<int>& ans){
//     //base case
//     if(index>=size)
//     return;
//     //processing
//     if(arr[index]%2==0)
//     ans.push_back(arr[index]);
//     //recursive call
//     findEven(arr,size,index+1,ans);

// }

void printDigit(int num,vector<int>& ans){
    //base case
    if(num==0)
    return;
    //processing 
    int digit=num%10;
    ans.push_back(digit);
    num=num/10;
    printDigit(num,ans);
}


int main(){

    int num=4215;
    vector<int> ans;
    printDigit(num,ans);
    
    for(int print:ans){
        cout<<print<<" ";
    }


    // int arr[]={10,20,10,30,10,40};
    // vector<int> ans;
    // int size=6;
    // int index=0;
    // int target=10;
    // findOcc(arr,size,index,target,ans);
    // for(int print:ans){
    //     cout<<print<<" ";
    // }

    // twice(arr,size,index);

    // findMaxi(arr,size,index,maxi);
    // cout<<"Maximum no in an array is:"<<maxi<<endl;
    
    
    // cout<<fact(n)<<endl;
    // printCounting(5);
    // cout<<power(10);
    // cout<<fib(9);
    // cout<<sum(6);
}