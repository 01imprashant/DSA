#include<iostream>
using namespace std;

////Painting Fence Algorithm

// //Recursive solution
// int solveUsingRec(int n,int k){
//     //Base Case
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return (k+k*(k-1));
//     }
//     int ans=(k-1)*(solveUsingRec(n-1,k)+solveUsingRec(n-2,k));
//     return ans;
// }
    
    
// //Top Down Approach(Recursion+Memoization)
// int solveUsingRecWithMemo(int n,int k,vector<int>& dp){
//     //Base Case
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return (k+k*(k-1));
//     }
//     //step3:check if ans already exist then return it
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     //step2:store and return in DP array
//     dp[n]=(k-1)*(solveUsingRecWithMemo(n-1,k,dp)+solveUsingRecWithMemo(n-2,k,dp));
//     return dp[n];
// }
    
    
// //Bottom Up Approach(Tabulation Method)
// int solveUsingTabulationMethod(int n,int k){
//     //step1:create DP array
//     vector<int> dp(n+1,-1);
//     //step2:analyse base case and fill initial DP array accordingly
//     dp[1]=k;
//     dp[2]=(k+k*(k-1));
//     //step3:fill remaining DP array
//     for(int index=3;index<=n;index++){
//         dp[index]=(k-1)*(dp[index-1]+dp[index-2]);
//     }
//     return dp[n];
// }
    

    
// //Bottom Up Approach With Space optimized(Tabulation Method)
// int solveUsingTabulationMethod(int n,int k){
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return (k+k*(k-1));
//     }
//     //step1:create DP array
//     // vector<int> dp(n+1,-1);
//     //step2:analyse base case and fill initial DP array accordingly
//     int prev2=k;
//     int prev1=(k+k*(k-1));
//     int curr;
        
//     // dp[1]=k;
//     // dp[2]=(k+k*(k-1));
//     //step3:fill remaining DP array
//     for(int index=3;index<=n;index++){
//         curr=(k-1)*(prev1+prev2);
            
//         prev2=prev1;
//         prev1=curr;
//     }
//     return curr;
// }



////0/1 Knapsack problem

// //Recursive Solution
// int solveUsingRec(int capacity,int wt[],int profit[],int index,int n){
//     //Base Case
//     if(index==n-1){
//         if(wt[index]<=capacity){
//             return profit[index];
//         }
//         else{
//             return 0;
//         }
//     }
//     //include or exclude
//     int include=0;
//     if(wt[index]<=capacity){
//         include=profit[index]+solveUsingRec(capacity-wt[index],wt,profit,index+1,n);
//     }
  
//     int exclude=0+solveUsingRec(capacity,wt,profit,index+1,n);

//     int ans=max(include,exclude);
//     return ans;
// }


//Top Down Approach(Recursion+Memoization)
int solveUsingRecWithMemo(int capacity,int wt[],int profit[],int index,int n, vector<vector<int>>& dp){
    //Base Case
    if(index==n-1){
        if(wt[index]<=capacity){
            return profit[index];
        }
        else{
            return 0;
        }
        }
    //step3:check if ans already exist then return it
    if(dp[capacity][index]!=-1){
        return dp[capacity][index];
    }
    // if(index>=n){
    //     return 0;
    // }
    //include or exclude
    int include=0;
    if(wt[index]<=capacity){
        include=profit[index]+solveUsingRecWithMemo(capacity-wt[index],wt,profit,index+1,n,dp);
    }
    int exclude=0+solveUsingRecWithMemo(capacity,wt,profit,index+1,n,dp);
    //step2:stonre and return in DP array
    dp[capacity][index]=max(include,exclude);
        
    return dp[capacity][index];
}

//Bottom Up Approach(Teabulation Method)
int sloveUsingTabulationMethod(int capacity,int wt[],int profit[],int index,int n){
    //step1:create DP array
    vector<vector<int>> dp(capacity+1,vector<int>(n+1,-1));
    //step2:analyse base case and fill initial DP array accordingly
    for(int row=0;row<=capacity;row++){
        dp[row][n]=0;
    }
    //step3:fill remaining DP array
    for(int i=0;i<=capacity;i++){
        for(int j=n-1;j>=0;j--){
            //include or exclude
            int include=0;
            if(wt[j]<=i){
                include=profit[j]+dp[i-wt[j]][j+1];
            }
            int exclude=0+dp[i][j+1];
            //step2:stonre and return in DP array
            dp[i][j]=max(include,exclude);
        }
    }
    return dp[capacity][0];
}


int main(){
    // int n=3;
    // int k=3;
    
    //step1:create DP array
    // vector<int> dp(n+1,-1); 
    // int ans=solveUsingRecWithMemo(n,k,dp);
    // return ans;
    // int ans=solveUsingTabulationMethod(n,k);
    // cout<<"Ans:"<<ans<<endl;

    int capacity=50;
    int wt[]={10,20,30};
    int profit[]={60,100,120};
    int index=0;
    int n=3;

    // int ans=solveUsingRec(capacity,wt,profit,index,n);
    // cout<<"Ans:"<<ans<<endl;

    // vector<vector<int>> dp(capacity+1,vector<int>(n+1,-1));
    // int ans=solveUsingRecWithMemo(capacity,wt,profit,index,n,dp);
    // cout<<"Ans:"<<ans<<endl;

    int ans=sloveUsingTabulationMethod(capacity,wt,profit,index,n);
    cout<<"Max Profit:"<<ans<<endl;

    return 0;
}