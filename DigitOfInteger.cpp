#include<iostream>
using namespace std;

void digitOfInteger(int n){

  while(n!=0){
   int digit=n%10;
   cout<<"Digits of an Integer is:"<<digit<<endl;
   n=n/10;
 }
}
    

int main(){

    int n;
    cin>>n; 
    digitOfInteger(n);

}