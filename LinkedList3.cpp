#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Dtor called for:"<<this->data<<endl;
    }

};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

bool checkForLoop(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;
}

Node* startingPointOfLoop(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            break;
        }
    }
    
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    Node* startingPoint=startingPointOfLoop(head);
    Node* temp=startingPoint;
    while(temp->next!=startingPoint){
        temp=temp->next;
    }
    temp->next=NULL;
}

Node* reverseLinkedList(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}

void addOne(Node* &head){
    //reverse
    head=reverseLinkedList(head);

    //add One  
    int carry=1;
    Node* temp=head;
    while(temp->next!=NULL){
        int totalSum=temp->data+carry;
        int digit=totalSum%10;
        carry=totalSum/10;
        temp->data=digit;
        temp=temp->next;
        if(carry==0){
            break;
        }

    }
    if(carry!=0){
        int totalSum=temp->data+carry;
        int digit=totalSum%10;
        carry=totalSum/10;
        temp->data=digit; 
        if(carry!=0){
          Node* newNode=new Node(carry);
          temp->next=newNode;
        } 
    }
   

    //reverse
    head=reverseLinkedList(head);
}

int main(){

    Node* head=NULL;
    Node* tail=NULL;
    
    Node* first=new Node(9);
    Node* second=new Node(9);
    Node* third=new Node(9);
    // Node* fourth=new Node(40);
    // Node* fifth=new Node(50);
    // Node* sixth=new Node(60);

    head=first;
    tail=third;

    first->next=second;
    second->next=third;
    third->next=NULL;
    // fourth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=NULL;

    print(head);

    // cout<<checkForLoop(head)<<endl;
    // Node* temp=startingPointOfLoop(head);
    // cout<<temp->data<<endl;
    // removeLoop(head);
    // cout<<checkForLoop(head)<<endl;
    // print(head);

    addOne(head);
    print(head);



    
    return 0;
}