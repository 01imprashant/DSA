#include<iostream>
#include<math.h>
using namespace std;

// int binaryToDecimalMethod1(int n){
//     int decimal=0;
//     int i=0;
//     while(n){
//         int bit=n%10;
//         decimal=decimal+bit*pow(2,i);
//         i++;
//         n=n/10;
//     }
//     return decimal;
// }

void binaryToDecimalMethod2(int n){
    //bitwise method
    int ans=0,i=0;
    while(n!=0){
        int bit=n&1;
        ans=ans+bit*pow(2,i);
        n=n>>1;
        i++;
    } 
    cout<<ans;
}

int main(){
    int binaryNum;
    cin>>binaryNum;
    // cout<<binaryToDecimalMethod1(binaryNum);
    binaryToDecimalMethod2(binaryNum);
}