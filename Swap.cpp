#include<iostream>
using namespace std;

// void swapfun(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

int main(){
    int a=10;
    int b=20;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    
    // swapfun(a,b);

    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    return 0;
}