#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// void printArray(int arr[],int size,int index){
//     //Base Case
//     if(index>=size){
//         return ;
//     }

//     //Processing
//     cout<<arr[index]<<" ";

//     //Recursive Call
//     printArray(arr,size,index+1);
    
// }


// bool searchInArray(int arr[],int size,int target,int index){
//     //Base Case
//     if(index>=size){
//         return false;
//     }
//     if(arr[index]==target){
//         return true;
//     }
//      //Recursive Call
//     int ans=searchInArray(arr,size,target,index+1);
//     return ans;
// }


// void findMin(int arr[],int size,int index,int& mini){
//     //Base Case
//     if(index>=size){
//         return ; 
//     }
//     //Processing
//      mini=min(mini,arr[index]);
    
//     //recursive call
//     findMin(arr,size,index+1,mini);

// }


// void solve(int arr[],int size,int index,vector<int>& ans){
//     //Base Case
//     if(index>=size){
//         return ;
//     }
//     //Processing
//     if(arr[index]%2==0){
//         ans.push_back(arr[index]);
//     }
//     solve(arr,size,index+1,ans);
// }


// void findMax(int arr[],int size,int index,int& maxi){
//     //Base Case
//     if(index>=size)
//     return ;
    
//     //Processing
//     maxi=max(maxi,arr[index]);

//     findMax(arr,size,index+1,maxi);
// }


// void twice(int arr[],int size,int index){
//     //Base Case
//     if(index>=size)
//     return ;

//     //Processing
//     arr[index]=2*arr[index];

//     twice(arr,size,index+1);
// }


// int find(int arr[],int size,int index,int target){
//     //Base CASE
//     if(index>=size)
//     return -1;

//     //Procdessing
//     if(index>=0 && arr[index]==target)
//     return index;

//     //Recursive call
//     int ans=find(arr,size,index+1,target);
//     return ans;

// }


// int find(int arr[],int size,int index,int target,vector<int>& ans){
//     //Base case
//     if(index>=size)
//     return -1;
    
//     //Processing 
//     if(arr[index]==target)
//     ans.push_back(index);

//     //Recursive call 
//     find(arr,size,index+1,target,ans);
    
// }

void printDigit(int num,vector<int>& ans){
    //base case
    if(num==0){
        return;
    }

    //Processing
    int digit=num%10;
    num=num/10;

    //recursive call
    printDigit(num,ans);

    ans.push_back(digit);

}



int main(){

    int num=4215;
    vector<int> ans;
    printDigit(num,ans);

    for(int nums:ans){
        cout<<nums<<" "<<endl;
    }


    // int arr[]={10,20,10,40,50};
    // int size=5;
    // int index=0;
    // int target=10;

    // vector<int> ans;
    // find(arr,size,index,target,ans);

    // for(int print:ans){
    //     cout<<print<<" ";
    // }

    // cout<<"Index of Targeted element:"<<find(arr,size,index,target);
    // twice(arr,size,index);

    // for(int print:arr){
    //     cout<<print<<" ";
    // }

    // int maxi=INT_MIN;
    // findMax(arr,size,index,maxi);
    // cout<<"Maximum in an array is:"<<maxi<<endl;

    // vector<int> ans;
    // solve(arr,size,index,ans);

    // for(int num:ans){
    //     cout<<num<<" ";
    // }


    // int target=55;

    // int mini=INT_MAX;
    // findMin(arr,size,index,mini);
    // cout<<"Minimum no in an array is:"<<mini<<endl;

    // cout<<"Target is Present or Not:"<<searchInArray(arr,size,target,index)<<endl;
    // printArray(arr,size,index);

    // return 0;
    
}