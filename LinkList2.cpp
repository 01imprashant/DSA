#include<iostream>
using namespace std;


class Node{
    public:
    Node* prev;
    int data;
    Node* next;


    Node(){
       // cout<<"Inside default constructor"<<endl;
        this->prev=NULL;
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
       // cout<<"Inside paramitrized constructor"<<endl;
        this->prev=NULL;
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
      cout<<"dtor called for:"<<this->data<<endl;
    }
};


void printLL(Node* head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
}


int findLength(Node* &head){
  Node* temp=head;
  int len=0;
  while(temp!=NULL){
    len++;
    temp=temp->next;
  }
  return len;
}


void insertAtHead(Node* &head,Node* &tail,int data){
  if(head==NULL){
    //empty LL
    Node* newNode=new Node(data);
    head=newNode;
    tail=newNode;
  }
  else{
    //non empty LL
    Node* newNode=new Node(data);

    newNode->next=head;

    head->prev=newNode;

    head=newNode;
  }
}

void insertAtTail(Node* &head,Node* &tail,int data){
  if(head==NULL){
    //LL is empty
    Node* newNode=new Node(data);
    
    head=newNode;
    tail=newNode;
  }
  else{
    //LLis non empty
    Node* newNode=new Node(data);

    tail->next=newNode;

    newNode->prev=tail;

    tail=newNode;

  }
}

void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
  if(head==NULL){
    //LL is empty
    Node* newNode=new Node(data);

    head=newNode;

    tail=newNode;

  }
  else{
    //LL is non empty
    int len=findLength(head);
    if(pos==1){
      insertAtHead(head,tail,data);
    }
    else if(pos==len+1){
      insertAtTail(head,tail,data);
    }
    else{
    //step1:create new node
    Node* newNode=new Node(data);
    //step2:set prev and curr
    Node* prevNode=NULL;
    Node* currNode=head;
    while(pos!=1){
      pos--;
      prevNode=currNode;
      currNode=currNode->next;
    }
    //step3:update all nodes
    prevNode->next=newNode;
    newNode->prev=prevNode;

    newNode->next=currNode;
    currNode->prev=newNode;
    }
  }
}

void deleteNode(Node* &head,Node* &tail,int pos){
  if(head==NULL){
    //LL is empty
    cout<<"Can't delete,bcoz LL is Empty"<<endl;
  }
  else if(head==tail){
    Node* temp=head;
    delete temp;
    head=NULL;
    tail=NULL;
  }
  else{
    //LL is non empty
    int len=findLength(head);
    if(pos==1){
     //delete from head
     Node* temp=head;
     head=temp->next;
     temp->next=NULL;
     head->prev=NULL;
     delete temp;
    }
    else if(pos==len){
     //delete from tail
     Node* prevNode=tail->prev;
     prevNode->next=NULL;
     tail->prev=NULL;
     delete tail;
     tail=prevNode;
    }
    else{
     //delete from middle
     //step1:set prevNode/currNode/nextNode
     Node* prevNode=NULL;
     Node* currNode=head;
     while(pos!=1){
       prevNode=currNode;
       currNode=currNode->next;
       pos--;
      }
    Node* nextNode=currNode->next;

    //step2:Update all the nodes
    prevNode->next=nextNode;
    currNode->prev=NULL;
    currNode->next=NULL;
    nextNode->prev=prevNode;

    //step3:delete node
    delete currNode;
  }
 }
}

int main(){
  
  // Node* head=new Node(10);
  // printLL(head);

  Node* head=NULL;
  Node* tail=NULL;
  
  insertAtHead(head,tail,40);
  insertAtHead(head,tail,30);
  insertAtHead(head,tail,20);
  insertAtHead(head,tail,10);

  printLL(head);  

  cout<<endl;

  // insertAtTail(head,tail,100);
  // printLL(head);
  // cout<<endl;

  // insertAtPosition(head,tail,1000,5);
  // printLL(head);
  // cout<<endl;

  deleteNode(head,tail,2);
  printLL(head);
  cout<<endl;

   return 0;
}