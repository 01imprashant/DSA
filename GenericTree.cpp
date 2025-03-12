#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int noc;
    Node** children;

    Node(int val){
        this->data=val;
        this->noc=0;
        this->children=NULL;
    }
};

Node* createTree(){
    cout<<"Enter root node:";
    int data;
    cin>>data;
    cout<<endl;
    cout<<"Enter noc for "<<data<<" node:";
    int num;
    cin>>num;

    Node* root=new Node(data);
    root->noc=num;
    root->children=new Node*[num];
    for(int i=0;i<num;i++){
        root->children[i]=createTree();
    }
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
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
            for(int i=0;i<front->noc;i++){
                if(front->children[i]){
                    q.push(front->children[i]);
                }
            }
        }
    }
}

int main(){
    Node* root=createTree();
    levelOrderTraversal(root);

    return 0;
}
