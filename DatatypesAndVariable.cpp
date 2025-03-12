#include<iostream>
using namespace std;
int main(){

//4 byte ka hota hai
int a=134;
cout<<a<<endl;
int size=sizeof(a);
cout<<size<<endl;

//1 byte ka hota hai
char ch='A';
cout<<ch<<endl;
 size=sizeof(ch);
cout<<size<<endl;
//1 byte ka hota hai
bool b=0;

cout<<b<<endl;
 size=sizeof(b);
 cout<<size<<endl;
//4 byte ka hota hai
float f=1.234;

cout<<f<<endl;
 size=sizeof(f);
 cout<<size<<endl;
//8 byte ka hota hai
double d=1.222222;

cout<<d<<endl;
 size=sizeof(d);
 cout<<size<<endl;

return 0;
}