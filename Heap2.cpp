#include<iostream>
#include<queue>
using namespace std;


// int getKthSmallestElement(int arr[],int n,int k){
//     //max heap creation
//     priority_queue<int> pq;
//     //first k element kon process karo
//     for(int i=0;i<k;i++){
//         int element=arr[i];
//         pq.push(element);
//     }
//     //remaining element ko process karo
//     for(int i=k;i<n;i++){
//         int element=arr[i];
//         if(element<pq.top()){
//            pq.pop();
//            pq.push(element);
//         }
//     }
//     int ans=pq.top();
//     return ans;
// }


// int getKthGratestElement(int arr[],int n,int k){
//     //min heap creation
//     priority_queue<int,vector<int>,greater<int>> pq;
//     //first k element kon process karo
//     for(int i=0;i<k;i++){
//         int element=arr[i];
//         pq.push(element);
//     }
//     //remaining element ko process karo
//     for(int i=k;i<n;i++){
//         int element=arr[i];
//         if(element>pq.top()){
//            pq.pop();
//            pq.push(element);
//         }
//     }
//     int ans=pq.top();
//     return ans;
// }

class Info{
    public:
    int maxVal;
    bool isHeap;
    Info(int a,bool b){
        this->maxVal=a;
        this->isHeap=b;
    }
};

Info checkMaxHeap(){
    //Base Case
    if(root==NULL){
        Info temp;
        temp.maxVal=INT_MIN;
        temp.isHeap=true;
    }
    if(root->left==NULL && root->right==NULL){
        Info temp;
        temp.maxVal=root->data;
        temp.isHeap=true;
    }

    Info leftAns=checkMaxHeap(root->left);
    Info rightAns=checkMaxHeap(root->right);

    if(root->data>leftAns.maxVal && root->data>rightAns.maxVal && leftAns.isHeap && rightAns.isHeap){
        Info ans;
        ans.maxVal=root->data;
        ans.isHeap=true;
        return ans;
    }
    else{
        Info ans;
        ans.maxVal=max(root->data,max(leftAns.maxVal,rightAns.maxVal));
        ans.isHeap=false;
        return ans;
    }
}

void storeInOrder(Node* root,vector<int>& inorder){
    if(root==NULL){
        return;
    }
    //LNR
    storeInOrder(root->left,inorder);
    inorder.push_back(root->data);
    storeInOrder(root->right,inorder);
}

void replaceNodeUsingPostOrderTraversal(Node* root,vector<int>& inorder,int& index){
    if(root==NULL){
        return;
    }
    //LRN
    replaceNodeUsingPostOrderTraversal(root->left,inorder,index);
    replaceNodeUsingPostOrderTraversal(root->right,inorder,index);
    root->data=inorder[index];
    index++;
}

void convertBSTIntoMaxHeap(Node* root){
    //step1:store inorder
    vector<int> inorder;
    storeInOrder(root,inorder);
    //Replace node using PostOrderTraversal
    int index=0;
    replaceNodeUsingPostOrderTraversal(root,inorder,index);
}

int main(){
    
    // //max heap creation
    // priority_queue<int> pq;
    // //insertion
    // pq.push(10); 
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(50);
    // cout<<"Top of the Heap:"<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top of the Heap:"<<pq.top()<<endl;
    // cout<<"Size of Heap:"<<pq.size()<<endl;

    // if(pq.empty()){
    //     cout<<"Heap is Empty"<<endl;
    // }
    // else{
    //     cout<<"Heap is not Empty"<<endl;
    // }


    // //min heaqp creation
    // priority_queue<int,vector<int>,greater<int>> pq;
    // //insertion
    // pq.push(100);
    // pq.push(90);
    // pq.push(50);
    // cout<<"Top of the Heap:"<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top of the Heap:"<<pq.top()<<endl;
    // cout<<"Size of Heap:"<<pq.size()<<endl;
    // if(pq.empty()){
    //     cout<<"Heap is Empty"<<endl;
    // }
    // else{
    //     cout<<"Heap is not Empty"<<endl;
    // }


    // int arr[]={3,7,4,5,6,8,9};
    // int n=7;
    // int k=3;
    // // cout<<"Kth Smallest Element:"<<getKthSmallestElement(arr,n,k)<<endl;
    // cout<<"Kth Gratest Element:"<<getKthGratestElement(arr,n,k)<<endl;
 

    return 0;
}