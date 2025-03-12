#include<iostream>
#include<stack>
using namespace std;
 

// class Stack{
//     public:
//     int *arr;
//     int size;
//     int top1;
//     int top2;

//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
//         top1=-1;
//         top2=size;
//     }

//     void push1(int data){
//         if(top2-top1==1){
//             cout<<"OVERFLOW"<<endl;
//         }
//         else{
//             top1++;
//             arr[top1]=data;
//         }
//     }

//     void push2(int data){
//         if(top2-top1==1){
//             cout<<"OVERFLOW"<<endl;
//         }
//         else{
//             top2--;
//             arr[top2]=data;
//         }
//     }

//     void pop1(){
//         if(top1==-1){
//             cout<<"UNDERFLOW"<<endl;
//         }
//         else{
//             arr[top1]=0;
//             top1--;
//         }
//     }

//     void pop2(){
//         if(top2==size){
//             cout<<"UNDERFLOW"<<endl;
//         }
//         else{
//             arr[top2]=0;
//             top2++;
//         }
//     }

//     void print(){
//         cout<<"Top 1: "<<top1<<endl;
//         cout<<"Top 2: "<<top2<<endl;
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//         cout<<endl;
//     }
// };




bool checkRedundant(string &str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' || ch=='+' || ch=='-'|| ch=='*' || ch=='/'){
            //open bracket or any operator-.push into stack
            st.push(ch);
        }
        else if(ch==')'){
            //close braacket
            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
                char temp=st.top();
                if(temp=='+'||temp=='-'||temp=='*'||temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            //agar yaha tak pahuche ho 
            //To iska mtlb stack ke top pr opening bracket hai
            st.pop();
            if(operatorCount==0){
                return true;
            }
        }
        
    }
    //agar yaha tak pahuche ho to 
    //Iska mtlb hai redundant bracket absent hai
    return false;
}



int main(){



    string str="((a+b)*(c+d))";
    bool ans=checkRedundant(str);

    if(ans){
        cout<<"Redundant Bracket Present"<<endl;
    }
    else{
        cout<<"Redundant Bracket Absent"<<endl;
    }



    // Stack st(6);

    // st.print();

    // st.push1(10);
    // st.print();

    // st.push1(20);
    // st.print();

    // st.push2(100);
    // st.print();

    // st.push2(200);
    // st.print();

    // st.push2(300);
    // st.print();

    // st.push2(500);
    // st.print();

    // st.pop1();
    // st.print();

    // st.pop1();
    // st.print();

    // st.pop1();
    // st.print(); 


    return 0;
}