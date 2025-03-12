#include<iostream>
using namespace std;

// int fact(int n){
//     //base case
//     if(n==0||n==1)
//     return 1;
    
//     //recursive call
//     int recursionKaAns=fact(n-1);

//     //processing
//     int finalAns=n*recursionKaAns;

//     return finalAns;
// }



// void printCounting(int n){
//     //base case
//     if(n==0) return;
    
//     //recursive call
//     printCounting(n-1);

//     //processing
//     cout<<n<<" ";

// }



// int pow(int n){
//     //base case
//     if(n==0) return 1;
    
//     //processing+recursive call
//     int ans=2*pow(n-1);

//     return ans;
// }



// int fib(int n){
//     //base case
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;
    
//     //processing+recursive call
//     int ans=fib(n-1)+fib(n-2);

//     return ans;
// }


int sum(int n){
    //base case
    if(n==1)
    return 1;
    
    //processing+recursive call 
    int ans=n+sum(n-1);

    return ans;
}


int main(){
    cout<<sum(5)<<endl;
    // cout<<fib(9)<<endl;
    // cout<<pow(10)<<endl;
    // printCounting(10)<<endl;
    // cout<<fact(5)<<endl;

    return 0;
}