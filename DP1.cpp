#include<iostream>
#include<vector>
using namespace std;

// //Recursive solution
// int fib(int n) {
//     //Base Case
//     if(n==0||n==1){
//        return n;
//     }
//     //Recursive call
//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }

// //Recursion+Memoization
// int fib(int n,vector<int>& dp) {
//     //Base Case
//     if(n==0||n==1){
//        return n;
//     }
//     //Step3:if ans already exist in DP array then return
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     //Recursive call
//     //Step2:store/return ans in DP array
//     dp[n]=fib(n-1,dp)+fib(n-2,dp);
//     return dp[n];
// }

// //Tabulation Method
// int fib(int n) {
//     //step1:create DP array
//     vector<int> dp(n+1,-1);
//     // //Base Case
//     // if(n==0||n==1){
//     //    return n;
//     // }
//     //step2:analyse base case and fill DP array
//     dp[0]=0;
//     dp[1]=1;
//     //step3:fill remaining DP array using recursive relation
//     //array size=n+1
//     //index move from 0 to n
//     //0 and 1 index already filled hai
//     //2 index se fill karo n index tak
//     for(int i=2;i<=n;i++){
//         //copy past karlo recursion logic ko
//         //replace recursive call with DP arry
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     //return dp[n]
//     return dp[n];    
// }

int main(){
    
    // int n;
    // cin>>n;
    // //Step1:create DP array
    // vector<int> dp(n+1,-1);
    // int ans=fib(n,dp);
    // cout<<"Fibonacci of num:"<<ans<<endl;

    // int ans=fib(n);
    // cout<<"Fibonacci of num:"<<ans<<endl;

    vector<int> v={1,2,3,1};
    cout<<v.size()<<endl;
    int n=v.size()-1;
    cout<<n<<endl;
    cout<<v[3]<<endl;


    return 0;
}