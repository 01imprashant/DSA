#include<iostream>
using namespace std;



// void printLine(){
//     for(int i=0;i<10;i++){
//         cout<<"Muje shalini pasand hai"<<endl;
//     }
// }




// void printA(){
//     cout<<"I am inside A"<<endl;
// }




// void printSum(int a,int b,int c){
//     int ans=a+b+c;
//     cout<<"Sum is: "<<ans<<endl;;
    
// }




// int printSum(int a,int b,int c){
//     int ans=a+b+c;
//     return ans;
    
// }




// void messagePrint(){
//     cout<<"Message 1"<<endl;
//     cout<<"Message 2"<<endl;
//     return;
// }




// void printMaximum(int num1,int num2,int num3){

//     if(num1>=num2 && num1>=num3){
//         cout<<"Maximum is: "<<num1<<endl;
//     }
//     else if(num2>=num1 && num2>=num3){
//         cout<<"Maximum is: "<<num2<<endl;
//     }
//     else{
//         cout<<"Maximum is: "<<num3<<endl;
//     }
// }




// int printMaximum(int n1,int n2,int n3){
//     int ans=max(n1,n2);
//     int finalAns=max(ans,n3);
//     return finalAns;
// }





// void printCounting(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }




// void checkEvenOdd(int num){
//     if(num%2==0){
//         cout<<"Even Number"<<endl;
//     }
//     else{
//         cout<<"Odd Number"<<endl;
//     }
// }


// void findSumUptoN(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"Sum is: "<<sum<<endl;
// }



// void findSumOfAllEvenUptoN(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         if(i%2==0){
//             sum=sum+i; 
//         }
//     }
//     cout<<"Sum of All Even Number is: "<<sum<<endl;
// }



bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;    
}





int main(){


    // printLine();
    // printA();
    // int ans=printSum(2,2,2);
    // cout<<ans<<endl;
    // messagePrint();
    // int ans=printMaximum(788,4,8);
    // cout<<"Maximum is: "<<ans<<endl;
    // printCounting(10);
    // checkEvenOdd(7);
    // findSumUptoN(10);
    // findSumOfAllEvenUptoN(10);
    
    bool ans=checkPrime(13);
    if(ans){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not a prime"<<endl;
    }


    return 0;
}