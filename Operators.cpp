#include<iostream>
using namespace std;
int main(){

int a=10;
int b=5;

//Arithmatic operator
cout<<a+b<<endl;
cout<<a-b<<endl;
cout<<a*b<<endl;
cout<<a/b<<endl;
cout<<a%b<<endl;

//Relational operator
cout<< (a<b) <<endl;
cout<< (a>b) <<endl;
cout<< (a<=b) <<endl;
cout<< (a>=b) <<endl;
cout<< (a!=b) <<endl;
cout<< (a==b) <<endl;

//Assignment operator
int i=100;
cout<<i<<endl;

//Logical operator
cout<<(a&&b)<<endl;
cout<<(a||b)<<endl;
cout<<(a^b)<<endl;
cout<<(!a)<<endl;
cout<<(!b)<<endl;

//Bitwise operator
cout<<(a&b)<<endl;
cout<<(a|b)<<endl;
cout<<(a^b)<<endl;

return 0;

}