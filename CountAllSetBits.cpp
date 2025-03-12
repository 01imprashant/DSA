#include<iostream>
using namespace std;

// int countAllSetBits(int n){
//     int count=0;
//     while(n>0){
//         int bit=n%2;
//         if(bit==1){
//             count++;
//         }
//         n=n/2;
//     }
//     return count;
// }



int countAllSetBits(int n){
    int count=0;
    while(n>0){
        int bit=(n&1);
        if(bit==1){
            count++;
        }
        n=n>>1;
    }
    return count;
}


int main(){
    int n;
    cin>>n;
    int countAllSetBit=countAllSetBits(n);
    cout<<"Number of set bit in N is: "<<countAllSetBit<<endl;
    return 0;
}
