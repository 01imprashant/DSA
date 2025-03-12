#include<iostream>
#include<stack>
using namespace std;

// class Stack{
//     public:
//     int *arr;
//     int size;
//     int top;

//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
//         this->top=-1;
//     }
    
//     void push(int data){
//         if(top==size){
//             cout<<"Stack overflow"<<endl;
//         }
//         else{
//             top++;
//             arr[top]=data;   
//         }
//     }

//     void pop(){
//         if(top==-1){
//             cout<<"Stack underflow"<<endl;
//             return;
//         }
//         else{
//            top--;  
//         }
//     }

//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;  
//         }
//     }

//     int getTop(){
//         if(top==-1){
//             cout<<"Stack is empty"<<endl;
//             return -1; 
//         }
//         else{
//           return arr[top];  
//         }
//     }

//     int getSize(){
//         return top+1;
//     }

//     void print(){
//         cout<<"Top:"<<top<<endl;
//         cout<<"Top element:"<<getTop()<<endl;
//         cout<<"Stack:";
//         for(int i=0;i<getSize();i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//         cout<<endl;
//     }
// };



// void solve(stack<int> &st,int &pos,int &ans){
//     //Base case
//     if(pos==1){
//         ans=st.top();
//         return;
//     }
//     // 1 case jo hum solve karege
//     pos--;
//     int temp=st.top();
//     st.pop();
//     //Recursive call
//     solve(st,pos,ans);
//     //Backtrack
//     st.push(temp);
// }



// int getMiddleElement(stack<int> &st){
//     int size=st.size();
//     if(st.empty()){
//         cout<<"Stack is empty,so no middle element is found"<<endl;
//         return -1;
//     }
//     else{
//         int pos=0;
//         if(size&1){
//            //mtlb odd hai
//            pos=size/2+1; 
//         }
//         else{
//             //mtlb even hai
//             pos=size/2+1;
//         }
//         int ans=-1;
//         solve(st,pos,ans);
//         return ans;
//     }
// }



// void insertAtBottom(stack<int> &st,int &element){
//     //Base case
//     if(st.empty()){
//         st.push(element);
//         return;
//     }
//     // 1 case hum solve karege baki recursion sambhal lega
//     int temp=st.top();
//     st.pop();
//     //Recursive call
//     insertAtBottom(st,element);
//     //Backtrack
//     st.push(temp);
// }



// void reverseStack(stack<int> &st){
//     //Base case 
//     if(st.empty()){
//         return;
//     }
//     // 1 case hum solve karege
//     int temp=st.top();
//     st.pop();
//     //Recursive call
//     reverseStack(st);
//     //Backtrack
//     insertAtBottom(st,temp);
// }

 

void insertSorted(stack<int> &st,int element){
    //Base case 
    if(st.empty()||element>st.top()){
        st.push(element);
        return;
    }
    // 1 case hum solve karege 
    int temp=st.top();
    st.pop();
    //Recursion
    insertSorted(st,element);
    //BackTrack
    st.push(temp);
    
}



void sortStack(stack<int>& st){
    //Base case
    if(st.empty()){
        return;
    }
    // 1 case hum solve karege baki recursion sambhal lega
    int temp=st.top();
    st.pop();
    //Recursion
    sortStack(st);
    //BackTrack
    insertSorted(st,temp);

}


int main(){

    stack<int> st;

    //insert values
    st.push(10);
    st.push(7);
    st.push(12);
    st.push(5);
    st.push(11);

    // int element=400;

    // insertAtBottom(st,element);
    
    
    // reverseStack(st);
    
    // while(!st.empty()){
    //    cout<<st.top()<<" ";
    //    st.pop();
    // }

    // cout<<endl;


    // insertSorted(st,35);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;




    // stack<int> st;

    // //insert values
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // st.push(60);

    // int mid=getMiddleElement(st);
    // cout<<"Middle Element:"<<mid<<endl;
 


    // string str="HelloJee";
    // stack<char> st;

    // for(int i=0;i<str.length();i++){
    //     char ch=str[i];
    //     st.push(ch);
    // }

    // while(!st.empty()){
    //     cout<<st.top();
    //     st.pop();
    // }
    // cout<<endl;


    // //Creation
    // Stack st(8);
    // //Push
    // st.push(10);
    // st.print();

    // st.push(20);
    // st.print();

    // st.push(30);
    // st.print();


    // cout<<"Top element:"<<st.getTop()<<endl;
    // cout<<"Size of stack:"<<st.getSize()<<endl;

    // st.pop();
    // st.pop();

    // if(st.isEmpty()){
    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     cout<<"Non Empty"<<endl;
    // }

 
    // cout<<endl;

    // st.push(30);
    // st.print();

    // st.push(10);
    // st.print();

    // st.push(20);
    // st.print();

    // st.push(30);
    // st.print();

    // st.push(10);
    // st.print();

    // st.push(20);
    // st.print();

    // st.push(30);
    // st.print();

    // st.push(10);
    // st.print();

    // st.push(20);
    // st.print();

    // st.push(30);
    // st.print();

    // st.pop();
    // st.print();

    // st.pop();
    // st.print();

    // st.pop();
    // st.print();




    // //stack creation
    // stack<int> st;
    // //stack insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // //size of stack
    // cout<<"Size of stack:"<<st.size()<<endl;
    // //stack element removal
    // st.pop();
    // //Top element
    // cout<<st.top()<<endl;
    // st.pop();
    // st.pop();
    // //check empty or not
    // if(st.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is non empty"<<endl;
    // }
    // // //Top element
    // // cout<<st.top()<<endl;



    return 0;
}