#include<iostream>
using namespace std;

int main()
{
    //n is a normal variable
    int n=10;
    cout<<"Value of n: "<<n<<endl;
    
    //k is a reference variable, refering to n
    int &k=n;
    cout<<"Value of k: "<<k<<endl;
    
     //m is a reference variable, refering to n
    int &m=n;
    cout<<"Value of m: "<<m<<endl;


    k++;


    cout<<"Value of n: "<<n<<endl;
    cout<<"Value of k: "<<k<<endl;
    cout<<"Value of m: "<<m<<endl;



    return 0; 
}
