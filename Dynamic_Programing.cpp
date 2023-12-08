


#include<bits/stdc++.h>
using namespace std;
// This is normal fibonacci using recursion 
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
//--------------------------------DP Memoization-----------------------
// int fib_dp(int n,vector<int>&dp){
//     if(n<=1){
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     return dp[n]=fib_dp(n-1,dp)+fib_dp(n-2,dp);
// }
//---------------------------------DP Tabulation----------------------------
// void fib_dp(int n,vector<int>&dp){
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     cout<< dp[n-1];
// }
//-------------------------------------------------------------------------------
// void fib_dp(int n,vector<int>&dp){
//     int prev2=0;
//     int prev=1;
//      int curri;
//     for(int i=2;i<n;i++){
//         curri=prev2+prev;
//         prev2=prev;
//         prev=curri;
//     }

//     cout<< curri;
// }
int main()
{
    int n=5;
    vector<int> dp;
    fib_dp(n,dp);
    
    return 0;
}
