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


Node* bstFromInorder(int inorder[],int s,int e){
    //Base Case
    if(s>e){
        return NULL;
    }
    //1 case khud solve karo
    int mid=(s+e)/2;
    int element=inorder[mid];
    Node* root=new Node(element);

    //Baaaki recursion sambhal lega
    root->left=bstFromInorder(inorder,s,mid-1);
    root->right=bstFromInorder(inorder,mid+1,e);

    return root;
}

void convertBSTintoSortedDLL(Node* root,Node* &head){
    if(root==NULL){ 
        return;
    }
    //RNL
    //R
    convertBSTintoSortedDLL(root->right,head);
    //N
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    //L
    convertBSTintoSortedDLL(root->left,head);
}

void printLinkedList(Node* head){
    Node* temp=head;
    cout<<"Print Entire Linked List:";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->right;
    }
    cout<<endl;
}

int main(){
    
    int inorder[]={10,20,30,40,50,60,70};
    int size=7;
    int start=0;
    int end=size-1;
    Node* root=bstFromInorder(inorder,start,end);
    levelOrderTraversal(root);
    // cout<<endl;

    Node* head=NULL;
    convertBSTintoSortedDLL(root,head);
    printLinkedList(head);
}
