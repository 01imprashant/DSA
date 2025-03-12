#include<iostream>
using namespace std;

void printSumOfEven(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    cout<<"Sum of all even is:"<<sum<<endl;
}

int main(){

    printSumOfEven(10);

}