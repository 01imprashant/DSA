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

Node* insertIntoBST(Node* root,int data){
    //first Node
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    //Not first node,Reset Nodes
    if(data > root->data){
        root->right=insertIntoBST(root->right,data);
    }
    else{
        root->left=insertIntoBST(root->left,data);
    }
    return root;

}

void createBST(Node* &root){
    cout<<"Enter Data:"<<endl;
    int data;
    cin>>data;
   
    while(data!=-1){
        root=insertIntoBST(root,data);
        cout<<"Enter Data:"<<endl;
        cin>>data;
    }
}


void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //LNR
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}

Node* minValue(Node* root){
    if(root==NULL){
        cout<<"Minimum value is not present";
        return NULL;
    }
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    if(root==NULL){
        cout<<"Maximum value is not present";
        return NULL;
    }
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

bool searchInBST(Node* root,int target){
    //Base Case
    if(root==NULL){
        return false;
    }
    //1 case mai saolve karuga
    if(root->data==target){
        return true;
    }
    //Baki recursion sambhal lega
    bool leftAns=false;
    bool rightAns=false;
    if(target > root->data){
        rightAns=searchInBST(root->right,target);
    }
    else{
        leftAns=searchInBST(root->left,target);
    }
    return leftAns || rightAns;
}

Node* deleteFromBST(Node* root,int target){
    //phile target ko dundho
    //then target ko delete karo
    if(root==NULL){
        return NULL;
    }
    if(root->data==target){
        //ab target mil gaya hai, target ko delete karna hai
        //4 case banege

        //1 Case->leaf node hai
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //2 Case->left non null hia or right null hai
        else if(root->left!=NULL && root->right==NULL){
            Node* childSubTree=root->left;
            delete root;
            return childSubTree;
        }
        //3 Case->left null hai or right non null hai
        else if(root->left==NULL && root->right!=NULL){
            Node* childSubTree=root->right;
            delete root;
            return childSubTree;
        }
        //4 Case->left bhi non null hai or right bhi non null hai
        else{
            //step1:left subtree ki maximum value find karo
            Node* maxi=maxValue(root->left);
            //step2:Replace root with maxi
            root->data=maxi->data;
            //step3:Delete kardo actual maxi ko
            root->left=deleteFromBST(root->left,maxi->data);
        }
        return root;
    }
    else if(root->data > target){
        root->left=deleteFromBST(root->left,target);
    }
    else{
        root->right=deleteFromBST(root->right,target);
    }
    return root;
}

Node* bstFromInorder(int inorder[],int s,int e){
    //Base Case
    if(s>e){
        return NULL;
    }
    //1 case khud solve karo
    int mid=(s+e)/2;
    int element=inorder[mid];
    Node* root=new Node(element);

    //Baki recursion sambhal lega
    root->left=bstFromInorder(inorder,s,mid-1);
    root->right=bstFromInorder(inorder,mid+1,e);

    return root;
}



int main(){
    Node* root=NULL;
    createBST(root);
    levelOrderTraversal(root);

    cout<<endl;
    cout<<"InOrder:";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"PreOrder:";
    preOrderTraversal(root);
    cout<<endl;
    cout<<"PostOrder:";
    postOrderTraversal(root);
    cout<<endl;

    Node* minNode=minValue(root);
    if(minNode==NULL){
        cout<<"There is no node in tree,so no minimum value is found";
    }
    else{
        cout<<"Minimum Node:"<<minNode->data<<" ";
    }
    cout<<endl;

    Node* maxNode=maxValue(root);
    if(maxNode==NULL){
        cout<<"There is no node in tree,so no maximum value is found";
    }
    else{
        cout<<"Maximum Node:"<<maxNode->data<<" ";
    }
    cout<<endl;


    // int target;
    // cout<<"Enter Target:";
    // cin>>target;
    // while(target!=-1){
    //     bool ans=searchInBST(root,target);
    //     if(ans==true){
    //         cout<<"Target Found"<<endl;
    //     }
    //     else{
    //         cout<<"Target Not Found"<<endl;
    //     }
    //     cout<<"Enter Target:";
    //     cin>>target;
    // }

 
    cout<<"Enter Target:";
    int target;
    cin>>target;
   
    while(target!=-1){
        deleteFromBST(root,target);
        levelOrderTraversal(root);
        cout<<"Enter Target:";
        cin>>target;
    }

    // int inorder[]={10,20,30,40,50,60,70};
    // int size=7;
    // int start=0;
    // int end=size-1;
    // Node* root=bstFromInorder(inorder,start,end);
    // levelOrderTraversal(root);

    return 0;
}