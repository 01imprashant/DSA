#include<iostream>
using namespace std;

int createNumberUsingDigit(int numberOfDigit){
    int num=0;
    for(int i=0;i<numberOfDigit;i++){
        cout<<"Enter digit: ";
        int digit;
        cin>>digit;
        num=num*10+digit;
        cout<<"Number created so far is: "<<num<<endl;
    }
    return num;
}

int main(){
    int numberOfDigit;
    cin>>numberOfDigit;
    int number=createNumberUsingDigit(numberOfDigit);
    cout<<"Finally number createrd by the digits is: "<<number<<endl;

    return 0;
}