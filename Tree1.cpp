#include<iostream>
#include<queue>
#include<map>
using namespace std;
class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
//It return the root node of the created tree
Node* createTree(){
    cout<<" Enter Node:";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
   
   //step1:Create Node
    Node* root=new Node(data);

    //step2:create leftsub tree
    cout<<"Left of Node "<<root->data;
    root->left=createTree();

    //step3:creare right subtree
    cout<<"Right of Node "<<root->data;
    root->right=createTree();

    return root;
}

// void preOrderTraversal(Node* root){
//     //base case
//     if(root==NULL){
//         return;
//     }
//     //NLR
//     cout<<root->data<<" ";
//     preOrderTraversal(root->left);
//     preOrderTraversal(root->right);
// }


// void inOrderTraversal(Node* root){
//     //base case
//     if(root==NULL){
//         return;
//     }
//     //LNR
//     inOrderTraversal(root->left);
//     cout<<root->data<<" ";
//     inOrderTraversal(root->right);
// }


// void postOrderTraversal(Node* root){
//     //base case
//     if(root==NULL){
//         return;
//     }
//     //LRN
//     postOrderTraversal(root->left);
//     postOrderTraversal(root->right);
//     cout<<root->data<<" ";
// }


void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    //start traversal
    while(!q.empty()){

      Node* front=q.front();
      q.pop();

      if(front==NULL){
        cout<<endl;
        
        if(!q.empty()){
            q.push(NULL);
        }
      }
      else{
        //valid wala casae
        cout<<front->data<<" ";

       if(front->left!=NULL){
         q.push(front->left);
       }
       if(front->right!=NULL){
         q.push(front->right);
       }
      }    
    }
}



// int searchInOrder(int inOrder[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(inOrder[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }


// Node* createTreeFromPreAndInOrderTraversal(int preOrder[],int inOrder[],int &preOrderIndex,int inOrderStart,int inOrderEnd,int size){
//     //Base Case
//     if(preOrderIndex>=size || inOrderStart>inOrderEnd){
//         return NULL;
//     }
//     int element=preOrder[preOrderIndex];
//     preOrderIndex++;
//     Node* root=new Node(element);
//     int position=searchInOrder(inOrder,size,element);

//     root->left=createTreeFromPreAndInOrderTraversal(preOrder,inOrder,preOrderIndex,inOrderStart,position-1,size);
//     root->right=createTreeFromPreAndInOrderTraversal(preOrder,inOrder,preOrderIndex,position+1,inOrderEnd,size);

//     return root;

// }




// int searchInOrder(int inOrder[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(inOrder[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }


// void createMapping(map<int,int> &valToIndexMap,int inOrder[],int size){
//     for(int i=0;i<size;i++){
//         int element=inOrder[i];
//         int index=i;
//         valToIndexMap[element]=index;
//     }
// }


// Node* createTreeFromPreAndInOrderTraversal(map<int,int> &valToIndexMap,int preOrder[],int inOrder[],int &preOrderIndex,int inOrderStart,int inOrderEnd,int size){
//     //Base Case
//     if(preOrderIndex>=size || inOrderStart>inOrderEnd){
//         return NULL;
//     }
//     int element=preOrder[preOrderIndex];
//     preOrderIndex++;
//     Node* root=new Node(element);
//     // int position=searchInOrder(inOrder,size,element);
//     int position=valToIndexMap[element];

//     root->left=createTreeFromPreAndInOrderTraversal(valToIndexMap,preOrder,inOrder,preOrderIndex,inOrderStart,position-1,size);
//     root->right=createTreeFromPreAndInOrderTraversal(valToIndexMap,preOrder,inOrder,preOrderIndex,position+1,inOrderEnd,size);

//     return root;

// }



void createMapping(map<int,int> &valToIndexMap,int inOrder[],int size){
    for(int i=0;i<size;i++){
        int element=inOrder[i];
        int index=i;
        valToIndexMap[element]=index;
    }
}

Node* createTreeFromPostAndInOrderTraversal(map<int,int> &valToIndexMap,int inOrder[],int postOrder[],int &postOrderIndex,int inOrderStart,int inOrderEnd,int size){
    //Base Case
    if(postOrderIndex< 0 || inOrderStart>inOrderEnd){
        return NULL;
    }
    int element=postOrder[postOrderIndex];
    postOrderIndex--;
    Node* root=new Node(element);
    // int position=searchInOrder(inOrder,size,element);
    int position=valToIndexMap[element];

 
    root->right=createTreeFromPostAndInOrderTraversal(valToIndexMap,inOrder,postOrder,postOrderIndex,position+1,inOrderEnd,size);
    root->left=createTreeFromPostAndInOrderTraversal(valToIndexMap,inOrder,postOrder,postOrderIndex,inOrderStart,position-1,size);

    return root;

}

int main(){

    // int preOrder[]={2,8,10,6,4,12};
    // int inOrder[]={10,8,6,2,4,12};
    // int size=6;
    // int preOrderIndex=0;
    // int inOrderStart=0;
    // int inOrderEnd=5;
    // Node* root=createTreeFromPreAndInOrderTraversal(preOrder,inOrder,preOrderIndex,inOrderStart,inOrderEnd,size);
    // cout<<"Printing Tree:"<<endl;
    // levelOrderTraversal(root);


    // int preOrder[]={2,8,10,6,4,12};
    // int inOrder[]={10,8,6,2,4,12};
    // int size=6;
    // int preOrderIndex=0;
    // int inOrderStart=0;
    // int inOrderEnd=5;
    // map<int,int> valToIndexMap;
    // createMapping(valToIndexMap,inOrder,size);
    // Node* root=createTreeFromPreAndInOrderTraversal(valToIndexMap,preOrder,inOrder,preOrderIndex,inOrderStart,inOrderEnd,size);
    // cout<<"Printing Tree:"<<endl;
    // levelOrderTraversal(root);



    int inOrder[]={8,14,6,2,10,4};
    int postOrder[]={8,6,14,4,10,2};
    int size=6;
    int postOrderIndex=size-1;
    int inOrderStart=0;
    int inOrderEnd=size-1;

    map<int,int> valToIndexMap;
    createMapping(valToIndexMap,inOrder,size);

    Node* root=createTreeFromPostAndInOrderTraversal(valToIndexMap,inOrder,postOrder,postOrderIndex,inOrderStart,inOrderEnd,size);
    cout<<"Printing Tree:"<<endl;
    levelOrderTraversal(root);


   
    // cout<<"PreOrder:";
    // preOrderTraversal(root);
    // cout<<endl;

    // cout<<"InOrder:";
    // inOrderTraversal(root);
    // cout<<endl;

    // cout<<"PostOrder:";
    // postOrderTraversal(root);
    // cout<<endl;

    // cout<<"LevelOrder:"<<endl;
    // levelOrderTraversal(root);
    // cout<<endl;

    return 0;
}