#include<iostream>
using namespace std;

int fastExponentiation(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b=b>>1;
    }
    return ans;

}

int slowExponentiation(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a;
    int b;
    int exponentiation=fastExponentiation(5,4);
    cout<<exponentiation<<endl;

    return 0;
}