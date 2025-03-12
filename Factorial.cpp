#include<iostream>
using namespace std;

long long int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
       fact=fact*i;
    }
  return fact;
}

int main(){
   int n;
   cin>>n;
   long long int fact=factorial(n);
   cout<<"Factorial of N number is:"<<fact<<endl;

}