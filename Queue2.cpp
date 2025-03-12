#include<iostream>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

// void reverseQueue(queue<int> &q){
//     stack<int> s;
//     //one by one queue se element lo or stack me dalo
//     while(!q.empty()){
//         int frontElement=q.front();
//         q.pop();
//         s.push(frontElement);
//     }
//     //one by one stack se element queue me dalo
//     while(!s.empty()){
//         int topElement=s.top();
//         s.pop();
//         q.push(topElement);
//     }
// }



// void reverse(queue<int> &q){
//     //Base case
//     if(q.empty()){
//         return;
//     }
//     int temp=q.front();
//     q.pop();
//     reverse(q);

//     q.push(temp);
// } 



// void reverseFirstK(queue<int> &q,int k){
//     stack<int> s;
//     int n=q.size();
//     //edge case 
//     if(k>n || k==0){
//         return;
//     }
//     //push first k elements from queue to stack
//     for(int i=0;i<k;i++){
//         int temp=q.front();
//         q.pop();
//         s.push(temp);
//     }
//     //push all k elements from stack to queue
//     while(!s.empty()){
//         int temp=s.top();
//         s.pop();
//         q.push(temp);
//     }
//     //pop (n-k) elements from queue and then push
//     for(int i=0;i<n-k;i++){
//         int temp=q.front();
//         q.pop();
//         q.push(temp);
//     }
// }



// void interLeaveQueue(queue<int> &first){
//     queue<int> second;
//     //push first half of first queue into second queue
//     int size=first.size();
//     for(int i=0;i<size/2;i++){
//         int temp=first.front();
//         first.pop();
//         second.push(temp);
//     }
//     //merge second half into first half
//     //in an alternate manner
//     for(int i=0;i<size/2;i++){
//         int temp=second.front();
//         second.pop();
//         first.push(temp);

//         temp=first.front();
//         first.pop();
//         first.push(temp);

//     }
// }


void firstNegInteger(int arr[],int size,int k){
    queue<int> q;
    //Process first k element
    for(int index=0;index<k;index++){
        if(arr[index]<0){
            q.push(index);
        }
    }
    //Process remaning element
    for(int index=k;index<size;index++){
        //agae badne se phele previous window ka ans nikal lo
        if(q.empty()){
            cout<<"0"<<endl;
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        //Removal of old element
        if(index-q.front()>=k){
            q.pop();
        }
        //Addition of new element
        if(arr[index]<0){
            q.push(index);
        }
    }
    //Last window ka ans print karlo
    if(q.empty()){
        cout<<"0"<<endl;
    }
    else{
        cout<<arr[q.front()]<<endl;
    }
}


int main(){
    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);


    // reverseQueue(q);

    // reverse(q);

    // reverseFirstK(q,4);

    // interLeaveQueue(q);

    int arr[]={2,-5,4,-1,-2,0,5};
    int size=7;
    int k=3;
    firstNegInteger(arr,size,k);


    // cout<<"Printing Queue:"<<endl;;
    // while(!q.empty()){
    //     int element=q.front();
    //     q.pop();
    //     cout<<element<<" ";
    // }
    // cout<<endl;


    return 0;
}