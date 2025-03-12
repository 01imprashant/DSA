#include<iostream>
using namespace std;

void checkEvenOdd(int num){
    if(num%2==0){
        cout<<"Even number"<<endl;
    }
   else{
    cout<<"Odd number"<<endl;
   }
}

int main(){
    int num;
    cin>>num;
    checkEvenOdd(num);
     
    return 0;
}