#include<iostream>
using namespace std;

// void countSetBit(int n){
//     int count=0;
//    while(n!=0){
   
//      if(n&1){
//         count++;
//         n=n>>1;
//     }
//     else{
//          n=n>>1;
//     }
    
//    }
//     cout<<"Count is:"<<count<<endl;
// }

void countSetBit(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    cout<<"SetBit: "<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    countSetBit(n);
}
