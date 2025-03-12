#include<iostream>
#include<math.h>
using namespace std;

void reverseDigit(int n){
    int ans=0;
    while(n!=0){
       int digit=n%10;
       ans=(ans*10)+digit;
       n=n/10;
    }
    cout<<"Reverse Digit is:"<<ans<<endl;

}


int main(){
    int n;
    cin>>n;
    reverseDigit(n);

    return 0;
}