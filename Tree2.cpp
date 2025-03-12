#include<iostream>
#include<queue>
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
//It returns the root node of the created tree
Node* createTree(){
    cout<<"Enter Node"<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    //step1:create node
    Node* root=new Node(data);
    //step2:create left subtree
    root->left=createTree();
    //step3:create right subtree
    root->right=createTree();

    return root;

}

// void preOrderTraversal(Node* root){
//     //Base case
//     if(root==NULL){
//         return;
//     }
//     //NLR
//     cout<<root->data<<" ";
//     preOrderTraversal(root->left);
//     preOrderTraversal(root->right);
// }

// void inOrderTraversal(Node* root){
//     //Base case
//     if(root==NULL){
//         return;
//     }
//     //LNR
//     inOrderTraversal(root->left);
//     cout<<root->data<<" ";
//     inOrderTraversal(root->right);

// }

// void postOrderTraversal(Node* root){
//     //Base case
//     if(root==NULL){
//         return;
//     }

//     //LRN
//     postOrderTraversal(root->left);
//     postOrderTraversal(root->right);
//     cout<<root->data<<" ";
// }

void levelOderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    //Start traversal
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

Node* traversal(Node* root,int node){
    if(root==NULL){
        return NULL;
    }
    if(root->data==node){
        return root;
    }
    traversal(root->left,node);
    traversal(root->right,node);
}

int main(){
    Node* root=createTree();

    Node* found=traversal(root,80);


    // cout<<"PreOrder:";
    // preOrderTraversal(root);
    // cout<<endl;

    // cout<<"InOrder:";
    // inOrderTraversal(root);
    // cout<<endl;

    // cout<<"PostOrder:";
    // postOrderTraversal(root);
    // cout<<endl;

    cout<<"LevelOrder:"<<endl;
    levelOderTraversal(root);



    return 0;

}
