#include<iostream>
#include<math.h>
using namespace std;

// int decimalToBinaryMethod1(int n){
//     //division method
//     int binaryNum=0;
//     int i=0;
//     while(n>0){
//         int bit=n%2;
//         binaryNum=bit*pow(10,i)+binaryNum;
//         i++;
//         n=n/2;
//     }
//     return binaryNum;
// }

void decimalToBinaryMethiod2(int n){
    //bitwise method
    int ans=0,i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"Binary is:"<<ans;
}

int main(){
    int n;
    cin>>n;
    // int binary=decimalToBinaryMethod1(n);
    // cout<<Binary is:<<binary<<endl;

    // decimalToBinaryMethiod2(n);
   
}