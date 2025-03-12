#include<iostream>
#include<vector>
using namespace std;

void printAllSubArrayUntil(vector<int> &nums,int start,int end){
    //base case
    if(end>=nums.size()){
        return;
    }
    //Ek case hum solve karege
    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    //Recursive call
    printAllSubArrayUntil(nums,start,end+1);
}

void printAllSubArray(vector<int> &nums){
    
    for(int start=0;start<=nums.size();start++){
        int end=start;
        printAllSubArrayUntil(nums,start,end);
        
    }
}


int main(){
    vector<int> nums{1,2,3,4,5};
    printAllSubArray(nums);
     

    return 0;
}