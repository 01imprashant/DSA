#include<iostream>
using namespace std;

bool printPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
           cout<<"Not prime "<<i<<endl;
        }
        else{
             cout<<"Prime "<<i<<endl;
        }
    }
  
}

int main(){

   printPrime(11);
    

}