#include<iostream>
#include<string>
#include<vector>

using namespace std;

int add(int a,int b){
    return a+b;
}

double add(double a,double b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

int main(){
    
    cout<<add(2,3)<<endl;
    cout<<add(3.5,4.5)<<endl;
    cout<<add(5,5,5)<<endl;


    return 0;
}