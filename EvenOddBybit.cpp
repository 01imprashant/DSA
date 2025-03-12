#include<iostream>
using namespace std;

void checkEvenOdd(int n){
    if(n&1){
       cout<<"Number is Odd"<<endl;
    }
    else{
        cout<<"Number is Even"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    checkEvenOdd(n);
}