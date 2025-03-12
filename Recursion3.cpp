#include<iostream>
#include<vector>
using namespace std;

// bool checkSort(int arr[],int size,int index){
//     //base case
//     if(index>=size){
//         return true;
//     }
//     //processing
//     if(arr[index]>arr[index-1]){
//        return checkSort(arr,size,index+1);
//     }
//     else{
//         return false;
//     }
// }



// int binarySearch(int arr[],int size,int start,int end,int target){
//     //Base case
//     if(start>end){
//         return -1;
//     }
//     //processing 
//     int mid=start+(end-start)/2;
//     if(arr[mid]==target){
//        return mid;
//     }
//     //recursive call
//     if(arr[mid]<target){
//         //right me jao
//         return binarySearch(arr,size,mid+1,end,target);
//     }
//     else{
//         //left me jao
//          return binarySearch(arr,size,start,mid-1,target);
//     }
// }



void findSubsequence(string str,string out,int index,vector<string>& ans){
    //Base case
    if(index>=str.length()){
        // cout<<"->"<<out<<endl;
        ans.push_back(out); 
        return;
    }
    char ch=str[index];


    //include
    out.push_back(ch);
    findSubsequence(str,out,index+1,ans);
    //exclude
    out.pop_back();
    findSubsequence(str,out,index+1,ans);

}


int main(){


    string str="abc";
    string out="";
    int index=0;
    vector<string> ans;
    findSubsequence(str,out,index, ans);
    cout<<"Printing a subsequence of sting stored in vector:"<<endl;
    for(string s:ans){
        cout<<"->"<<s<<endl;
    }


    // int arr[]={10,20,30,40,50,60,70,80};
    // int size=8;
    // int start=0;
    // int end=size-1;
    // int target=80;
    // int foundAtIndex=binarySearch(arr,size,start,end,target);
    // if(foundAtIndex){
    //     cout<<"Target found at:"<<foundAtIndex<<endl;
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }
    

    // int arr[]={10,20,30,40,50,60};
    // int size=0;
    // int index=1;
    // bool isSorted=checkSort(arr,size,index);
    // if(isSorted){
    //     cout<<"Array is sorted"<<endl;
    // }
    // else{
    //     cout<<"Array is not sorted"<<endl;
    // }



    return 0;
}