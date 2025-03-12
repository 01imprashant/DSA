#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n){
    //return true ->if N is prime no
    //return false->if N is not a prime no
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
     }
     return true; 
}

int main(){
    int n;
    cin>>n;
    bool prime=checkPrime(n);
       if(prime){
        cout<<"It's a prime number"<<endl;
       }
       else{
        cout<<"It's not a prime number"<<endl;
       }

}