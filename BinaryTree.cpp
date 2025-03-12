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

Node* createTree(){
    cout<<"Enter Node:";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* root=new Node(data);
    cout<<"Enter value for left Node:"<<root->data<<" ";
    root->left=createTree();
    cout<<"Enter value for right Node:"<<root->data<<" ";
    root->right=createTree();

    return root;
}

void preOrderTraversal(Node* root){
    //Base Case 
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
    //Base Case 
    if(root==NULL){
        return;
    }
    //LNR
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    //Base Case 
    if(root==NULL){
        return;
    }
    //LRN
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void levelOderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    cout<<endl;

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

void printLeftView(Node* root,int level,vector<int> &leftView){
    //Base Case 
    if(root==NULL){
        return;
    }
    //iska mtlb left view ki node mil gai hai,store karlo
    if(level==leftView.size()){
        leftView.push_back(root->data);
    }

    printLeftView(root->left,level+1,leftView);
    printLeftView(root->right,level+1,leftView);

}

void printRightView(Node* root,int level,vector<int> &rightView){
    //Base Case 
    if(root==NULL){
        return;
    }
    //iska mtlb left view ki node mil gai hai,store karlo
    if(level==rightView.size()){
        rightView.push_back(root->data);
    }

    printRightView(root->right,level+1,rightView);
    printRightView(root->left,level+1,rightView);
   

}

void printTopView(Node* root){
    map<int,int> hdToNodemap;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> front=q.front();
        q.pop();

        Node* frontNode=front.first;
        int hd=front.second;

        //if there is no entry for hd in map,then create a new entery
        if(hdToNodemap.find(hd)==hdToNodemap.end()){
            hdToNodemap[hd]=frontNode->data;
        }

        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"TopView:";
    for(auto i:hdToNodemap){
        cout<<i.second<<" ";
    }
}

void printBottomView(Node* root){
    map<int,int> hdToNodemap;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> front=q.front();
        q.pop();

        Node* frontNode=front.first;
        int hd=front.second;


        hdToNodemap[hd]=frontNode->data;

        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"BottomView:";
    for(auto i:hdToNodemap){
        cout<<i.second<<" ";
    }
}

void printLeftBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    cout<<root->data<<" ";
    if(root->left!=NULL){
        printLeftBoundary(root->left);
    }
    else{
        printLeftBoundary(root->right);
    }
   
   
}

void printLeafBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    if(root->right!=NULL){
        printRightBoundary(root->right);
    }
    else{
         printRightBoundary(root->left);
    }
    cout<<root->data<<" ";
}

void printBoundaryTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    printRightBoundary(root->right);

}

int main(){

    Node* root=createTree();

    cout<<"PreOrder:";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"InOrder:";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"PostOrder:";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"LevelOrder:";
    levelOderTraversal(root);
    cout<<endl;

    // vector<int> leftView;
    // int level=0;
    // cout<<"LeftView:";
    // printLeftView(root,level,leftView);
    // for(int i=0;i<leftView.size();i++){
    //     cout<<leftView[i]<<" ";
    // }

    cout<<endl;

    vector<int> rightView;
    int level=0;
    cout<<"RightView:";
    printRightView(root,level,rightView);
    for(int i=0;i<rightView.size();i++){
        cout<<rightView[i]<<" ";
    }

    cout<<endl;

    printTopView(root);

    cout<<endl;

    printBottomView(root);

    cout<<endl;

    cout<<"BoundaryTraversal:";
    printBoundaryTraversal(root);


return 0;
}