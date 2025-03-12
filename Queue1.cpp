#include<iostream>
#include<queue>
#include<deque>
using namespace std;

// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     Queue(int size){
//         arr=new int[size];
//         this->size=size;
//         front=-1;
//         rear=-1;
//     }
//     void push(int val){
//        //check full
//        if(rear==size-1){
//         cout<<"Queue Overflow"<<endl;
//         return;
//        } 
//        else if(front==-1 && rear==-1){
//         //empty case
//         front++;
//         rear++;
//         arr[rear]=val;
//        }
//        else{
//         //normal case
//         rear++;
//         arr[rear]=val;
//        }
//     }
//     void pop(){
//         //check empty
//         if(front==-1 && rear==-1){
//             cout<<"Queue Underflow"<<endl;
//             return;
//         }
//         else if(front==rear){
//             //single element
//             arr[front]=-1;
//             front=-1;
//             rear=-1;
//         }
//         else{
//             //normal case
//             arr[front]=-1;
//             front++;
//         }
//     }
//     bool isEmpty(){
//         if(front==-1 && rear==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     int getSize(){
//         //check empty
//         if(front==-1 && rear==-1){
//             return 0;
//         }
//         else{
//             return rear-front +1;
//         }
//     }
//     int getFront(){
//         if(front==-1){
//             cout<<"No element in Queue,So can not give front element"<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }
//     int getRear(){
//         if(rear==-1){
//             cout<<"No element in Queue,So can not give rear element"<<endl;
//             return -1;
//         }
//         else{
//             return arr[rear];
//         }
//     } 
//     void print(){
//         cout<<"Printing Queue:";
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };



// class CircularQueue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     CircularQueue(int size){
//         arr=new int[size];
//         this->size=size;
//         front=-1;
//         rear=-1;
//     }
//     void push(int val){
//         //overflow case
//         if((front==0 && rear==size-1)||(rear==front-1)){
//             cout<<"Queue Overflow"<<endl;
//             return;
//         }
//         //empty case
//         else if(front==-1 && rear==-1){
//             front++;
//             rear++;
//             arr[rear]=val;
//         }
//         //circular nature
//         else if(rear==size-1 && front!=0){
//             rear=0;
//             arr[rear]=val;
//         }
//         //normal flow
//         else{
//             rear++;
//             arr[rear]=val;
//         }
//     }
//     void pop(){
//         //Underflow
//         if(front==-1 && rear==-1){
//             cout<<"Queue Underflow"<<endl;
//             return;
//         }
//         //single element
//         else if(front==rear){
//             arr[front]=-1;
//             front=-1;
//             rear=-1;
//         }
//         //circular nature
//         else if(front==size-1){
//             arr[front]=-1;
//             front=0;
//         }
//         //normal flow
//         else{
//             arr[front]=-1;
//             front++;
            
//         }
//     }
//     void print(){
//         cout<<"Printing Queue:";
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };



class Deque{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  Deque(int size){
    arr=new int[size];
    this->size=size;
    front=-1;
    rear=-1;
  }

  void pushBack(int val){
    //check full
    if((front==0 && rear==size-1)||(rear==front-1)){
      cout<<"Overflow"<<endl;
    }
    //empty
    else if(front==-1 && rear==-1){
      front++;
      rear++;
      arr[rear]=val;
    }
    //circular case
    else if(rear==size-1 && front!=0){
      rear=0;
      arr[rear]=val;
    }
    //normal flow
    else{
      rear++;
      arr[rear]=val;
    }
  }
  void pushFront(int val){
    // check full
    if((front==0 && rear==size-1)||(rear=front-1)){
      cout<<"Overflow"<<endl;
    }
    //empty
    else if(front==-1 && rear==-1){
      front++;
      rear++;
      arr[front]=val;
    }
    //circular nature
    else if(front==0 && rear!=size-1){
      arr[front]=val;
      front=size-1;
    }
    //normal flow
    else{
      front--;
      arr[front]=val;
    }
  }

  void popFront(){
    // check empty
    if(front==-1 && rear==-1){
      cout<<"Underflow"<<endl;
    }
    //single element
    else if(front==rear){
      arr[front]=-1;
      front=-1;
      rear=-1;
    }
    //circular nature
    else if(front==size-1){
      arr[front]=-1;
      front=0; 
    }
    //normal case
    else{
      arr[front]=-1;
      front++;
    }
  }

  void popBack(){
    //check empty
    if(front==-1 && rear==-1){
      cout<<"Underflow"<<endl;
    }
    //single element
    else if(front==rear){
      arr[rear]=-1;
      front=-1;
      rear=-1;
    }
    //circular nature
    else if(rear==0){
      arr[rear]=-1;
      rear=size-1;
    }
    //normal flow
    else{
      arr[rear]=-1;
      rear--;
    }
  }
  void print(){
    cout<<"Printing Queue:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};


int main(){

    //creation dequeue
    Deque dq(5);
    dq.pushBack(10);
    dq.print();
    dq.pushBack(20);
    dq.print();
    dq.pushBack(30);
    dq.print();
    dq.pushBack(40);
    dq.print();
    dq.pushBack(50);
    dq.print();
    dq.pushBack(10);
    dq.print();
    dq.popFront();
    dq.popFront();
    dq.popFront();
    dq.print();
    dq.pushBack(100);
    dq.print();
    dq.pushBack(110);
    dq.print();
    dq.pushBack(120);
    dq.print();
    dq.pushBack(150);
    dq.print();
    dq.popBack();
    dq.popBack();
    dq.popBack();
    dq.print();

  



    
    // deque<int> dq;
    // dq.push_back(10);
    // dq.push_front(20);
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;
    // cout<<dq.size()<<endl;



    // //create queue
    // CircularQueue q(5);
    // q.print();

    // q.push(10);
    // q.print();
    // q.push(20);
    // q.print();
    // q.push(30);
    // q.print();
    // q.push(40);
    // q.print();
    // q.push(50);
    // q.print();

    // q.push(60);

    // q.pop();
    // q.pop();
    // q.pop();
    // q.print();

    // q.push(100);
    // q.print();
    // q.push(110);
    // q.print();
    // q.push(120);
    // q.print();
    // q.push(130);
    // q.print();



    // //create queue
    // Queue q(5);
    // q.print();
    // q.push(10);
    // q.print();
    // q.push(20);
    // q.print();
    // q.push(30);
    // q.print();
    // q.push(40);
    // q.print();
    // q.push(50);
    // q.print();
    // cout<<"Size of Queue:"<<q.getSize()<<endl;
    // q.pop();
    // q.print();
    // cout<<"Size of Queue:"<<q.getSize()<<endl;
    // cout<<"Queue is empty or not:"<<q.isEmpty()<<endl;
    // q.push(100);
    // q.print();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.print();
    // cout<<"Front element of queue:"<<q.getFront()<<endl;
    // cout<<"Rear element of queue:"<<q.getRear()<<endl;
    // q.pop();
    // q.print();
    // cout<<q.getSize()<<endl;



    // //Create 
    // queue<int> q;
    // // //Insertion
    // q.push(5);
    // //check size
    // cout<<"Size of queue is:"<<q.size()<<endl;
    // //check empty
    // if(q.empty()==true){
    //     cout<<"Queue is empty"<<endl;
    // }
    // else{
    //     cout<<"Queue is non empty"<<endl;
    // }
    // q.pop();
    // cout<<"Size of queue is:"<<q.size()<<endl;
    // q.push(10);
    // q.push(15);
    // q.push(20);

    // cout<<"front element of queue is:"<<q.front()<<endl;
    // cout<<"back element of queue is:"<<q.back()<<endl;


    return 0;
}