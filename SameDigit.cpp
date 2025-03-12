#include<iostream>
#include<math.h>
using namespace std;

void sameDigit(int n){
    int ans=0,i=0;
    while(n!=0){
        int digit=n%10;
        ans=(digit*pow(10,i))+ans;
        n=n/10;
        i++;
    }
    cout<<"Same Digit is:"<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    sameDigit(n);
}

    
