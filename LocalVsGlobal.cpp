#include<iostream>
using namespace std;
//Global variable
int x=10;

void fun(){
    int x=40;
    cout<<x<<endl;
    ::x=50;
    cout<<::x<<endl;
}

int main(){
    ::x=100;
    //local variable
    int x=5;
    cout<<x<<endl;
    //accessing global variable
    cout<<::x<<endl;
    {
        //local variable
        int x=20;
        cout<<x<<endl;
        cout<<::x<<endl;
        {
            int x=2;
            cout<<x<<endl;
            ::x=4;
            cout<<::x<<endl;
        }
    }
    fun();
    return 0;
}