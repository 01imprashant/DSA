#include<iostream>
#include<queue>
#include<vector>
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
    cout<<"Enter node:"<<endl;
    int data;
    cin>>data;

    //Base case
    if(data==-1){
        return NULL;
    }

    Node* root=new Node(data);

    root->left=createTree();
    root->right=createTree();

    return root;

}

void preOrder(Node* root){
    //Base case
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    //Base case
    if(root==NULL){
        return;
    }
    //LNR
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    //Base Case
    if(root==NULL){
        return;
    }
    //LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    cout<<endl;
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

void printLeftView(Node* root,vector<int> &ans,int level){
    //Base case
    if(root==NULL){
        return;
    }
    //Ek case jo hum solve karege
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    //baaki recursion sambhal lega
    printLeftView(root->left,ans,level+1);
    printLeftView(root->right,ans,level+1);

}


void printRightView(Node* root,vector<int> &ans,int level){
    //Base case
    if(root==NULL){
        return;
    }
    //Ek case jo hum solve karege
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    //baaki recursion sambhal lega
    printRightView(root->right,ans,level+1);
    printLeftView(root->left,ans,level+1);
  

}


void printTopView(Node* root){
    map<int,int> hdToNodeMap;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd=temp.second;
        //hd ke corresponding map me koi bhi data store nhi hai
        if(hdToNodeMap.find(hd)==hdToNodeMap.end()){
            hdToNodeMap[hd]=frontNode->data;
        }
        //child ko deekh lo
        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"Printing Top View:";
    for(auto i:hdToNodeMap){
        cout<<i.second<<" ";
    }
    cout<<endl;
}


void printBottomView(Node* root){
    map<int,int> hdToNodeMap;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd=temp.second;
        
        //update karo
        hdToNodeMap[hd]=frontNode->data;

        //child ko deekh lo
        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"Printing Bottom View:";
    for(auto i:hdToNodeMap){
        cout<<i.second<<" ";
    }
    cout<<endl;
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

void printLeafNode(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printLeafNode(root->left);
    printLeafNode(root->right);
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

void boundaryTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeafNode(root->left);
    printLeafNode(root->right);
    printRightBoundary(root->right);
    cout<<endl;
}

int main(){
    
    Node* root=createTree();

    boundaryTraversal(root);

    // printTopView(root);
    // printBottomView(root);


    // vector<int> ans;
    // int level=0;
    // cout<<"Printing RightView:";
    // printRightView(root,ans,level);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    
    // cout<<"Printing LeftView:";
    // printLeftView(root,ans,level);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"Printing PreOrder:";
    // preOrder(root);
    // cout<<endl;
    // cout<<"Printing InOrder:";
    // inOrder(root);
    // cout<<endl;
    // cout<<"Printing PostOrder:";
    // postOrder(root);
    // cout<<"Printing LevelOrder:"<<endl;
    // levelOrder(root);
    // cout<<endl;


    return 0;
}

