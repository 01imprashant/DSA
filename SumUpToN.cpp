#include<iostream>
using namespace std;

void printSumUpToN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<" Final Sum is:"<<sum<<endl;
}

int main(){

    printSumUpToN(10);

}