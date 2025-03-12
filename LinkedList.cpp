#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    
    //Default ctor
    Node(){
        // cout<<"Inside default constructor"<<endl;
        this->data=0;
        this->next=NULL;
    }
    //Perametrized ctor
    Node(int data){
        // cout<<"Inside paramitrized constructor"<<endl;
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Dtor is called for:"<<this->data<<endl;
    }
};


void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


int getLength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}


void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL && tail==NULL){
        //empty LL
        //step1:create new node
        Node* newNode=new Node(data);
        //step2:update head
        head=newNode;
        tail=newNode;
    }
    else{
    //Non-empty
    //create a new node
    Node* newNode=new Node(data);
    //attach new node to head node
    newNode->next=head;
    //update head
    head=newNode;
    }
}


void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        //empty:LL
        //step1:create new node
        Node* newNode=new Node(data);
        //step2:head or tail ko new node se attach kardo
        head=newNode;
        tail=newNode;

    }
    else{
        //non empty:LL
        //step1:create new node
          Node* newNode=new Node(data);
        //step2:attach new node to tail node
          tail->next=newNode;
        //step3:update tail
          tail=newNode;
    }
}


void createTail(Node* &head,Node* &tail){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    tail=temp;

}


void insertAtPosition(Node* &head,Node* &tail,int data,int pos){

    int length=getLength(head);

    if(pos==1){
        insertAtHead(head,tail,data);
    }
    else if(pos==length+1){
        insertAtTail(head,tail,data);
    }
    else{
        //step1:create new node
        Node* newNode=new Node(data);
        //step2:traverse previous,current to position
        Node* prev=NULL;
        Node* curr=head;
        while(pos!=1){
            prev=curr;
            curr=curr->next;
            pos--;
        }
        //step3:attach prev to newNode
        prev->next=newNode;
        //step4:attach newNode to curr
        newNode->next=curr;
    }
 
}

void deleteNode(Node* &head,Node* &tail,int pos){
    int len=getLength(head);
    //LL is empty
    if(head==NULL){
        cout<<"Can't delete,bcoz LL is Empty"<<endl;
    }
    //single element wala case 
    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    //LL is non empty 
    if(pos==1){
        //delete from head
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;        
    }
    else if(pos==len){
        //delete from tail
        Node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }
        prev->next=NULL;
        delete tail;
        tail=prev;
    }
    else{
        //delete from middle
        Node* prev=NULL;
        Node* curr=head;
        while(pos!=1){
            prev=curr;
            curr=curr->next;
            pos--;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
   
}


int main(){

    Node* head=NULL;
    Node* tail=NULL;
    
    insertAtHead(head,tail,50);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,10);
    printLL(head);

    deleteNode(head,tail,1 ); 
    printLL(head);

    // printLL(head);
    // insertAtTail(head,tail,100);

    // printLL(head);
    // insertAtPosition(head,tail,500,3);
    // printLL(head);


    //creation of node
    // Node a;
    // Node* head=new Node();

    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    // //LL create ho chuki hai

    // Node* head=first;
    // cout<<"Printing the entire LL"<<endl;
    // printLL(head);

    // Node* head=first;
    // Node* tail=first;
    // cout<<"Length of LL is:"<<getLength(head)<<endl;
    
    // Node* head=first;
    // Node* tail=first;
    // printLL(head);
    // insertAtHead(head,tail,500);
    // printLL(head);

    // Node* head=first;
    // Node* tail=fifth;
    // printLL(head); 
    // insertAtTail(head,tail,500);
    // printLL(head);



    return 0;

}