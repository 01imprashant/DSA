#include<iostream> 
#include<queue>
using namespace std;
// class Info{
//     public:
//     int data;
//     int rowIndex;
//     int colIndex;
//     Info(int a,int b,int c){
//         this->data=a;
//         this->rowIndex=b;
//         this->colIndex=c;
//     }
// };
// class compare{
//     public:
//     bool operator()(Info* a,Info* b){
//         return a->data > b->data;
//     }
// };
// void mergeKSortedArray(int arr[3][4],int n,int k,vector<int>& ans){
//     priority_queue<Info*,vector<Info*>,compare> pq;
//     //process 1st k element
//     for(int row=0;row<k;row++){
//         int element=arr[row][0];
//         Info* temp=new Info(element,row,0);
//         pq.push(temp);
//     }
//     while(!pq.empty()){
//         Info* temp=pq.top();
//         pq.pop();
//         int topData=temp->data;
//         int topRow=temp->rowIndex;
//         int topCol=temp->colIndex;
//         ans.push_back(topData);
//         //jiss arr me se element pop kiya hai,uska next element heap me push kardo
//         if(topCol+1<n){    
//             Info* newInfo=new Info(arr[topRow][topCol+1],topRow,topCol+1);
//             pq.push(newInfo);
//         }
//     }
// }

void medianInAStream(int element,double& median,priority_queue<int>& maxi,priority_queue<int,vector<int>,greater<int>>& mini){
    if(maxi.size()==mini.size()){
        if(element>median){
            mini.push(element);
            median=mini.top();
        }
        else{
            maxi.push(element);
            median=maxi.top();
        }
    }
    else if(maxi.size()==mini.size()+1){
        if(element>median){
            mini.push(element);
        }
        else{
            int maxiTop=maxi.top();
            maxi.pop();
            mini.push(maxiTop);
            maxi.push(element);
        }
        median=(maxi.top()+mini.top())/2.0;
    }
    else if(mini.size()==maxi.size()+1){
        if(element>median){
            int miniTop=mini.top();
            mini.pop();
            maxi.push(miniTop);
            mini.push(element);
        }
        else{
            maxi.push(element);
        }
        median=(maxi.top()+mini.top())/2.0;
    }
}

int main(){
    // int arr[3][4]={
    //             {1,4,6,10},
    //             {2,3,6,8},
    //             {3,7,9,11}
    // };
    // int n=4;
    // int k=3;
    // vector<int> ans;
    // mergeKSortedArray(arr,n,k,ans);

    // cout<<"Printing Sorted Array:"<<endl;
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl; 

    // int arr[]={5,13,1,3,2,8};
    // int n=6;
    // priority_queue<int> maxi;
    // priority_queue<int,vector<int>,greater<int>> mini;
    // double median=0;
    // for(int i=0;i<n;i++){
    //     int element=arr[i];
    //     medianInAStream(element,median,maxi,mini);
    //     cout<<"Median of stream:"<<median<<endl;
    // }


    return 0;
}