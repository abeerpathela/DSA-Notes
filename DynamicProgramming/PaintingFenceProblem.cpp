// Painting fence Problem (DP)

#include <iostream>
#include<vector>
using namespace std;

int solveUsingRecurrsion(int n,int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return k*k;
    }
    
    int ans=(solveUsingRecurrsion(n-1,k)+solveUsingRecurrsion(n-2,k))*(k-1);
    return ans;
}

int solveUsingMem(int n,int k,vector<int>& dp){
    if(n==1){
        return k;
    }
    if(n==2){
        return k*k;
    }
    
    if(dp[n]!=-1){
        return dp[n];
    }
    
    int ans=(solveUsingRecurrsion(n-1,k)+solveUsingRecurrsion(n-2,k))*(k-1);
    dp[n]=ans;
    return dp[n];
}

int solveUsingTabulation(int n,int k){
    vector<int>dp(n+1,-1);
    dp[1]=k;
    dp[2]=k*k;
    
    for(int N=3; N<=n; N++){
        dp[N]=(dp[N-1]+dp[N-2])*(k-1);
    }
    
    return dp[n];
}

int solveUsingSO(int n,int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return k*k;
    }
    
    int prev2=k;
    int prev1=k*k;
    int curr;
    
    for(int N=3; N<=n; N++){
        curr=(prev1+prev2)*(k-1);
        prev2=prev1;
        prev1=curr;
    }
    
    return curr;
}

int countWays(int n,int k){
    int ans=solveUsingRecurrsion(n,k);
    return ans;
}
int main()
{
    int n, k;

    cout << "Enter number of fences: ";
    cin >> n;

    cout << "Enter number of colors: ";
    cin >> k;

    // int ans = countWays(n, k);
    
    // create 1 d dp array 
    // vector<int>dp(n+1,-1);
    // int ans=solveUsingMem(n,k,dp);
    
    // int ans=solveUsingTabulation(n,k);
    
    int ans=solveUsingSO(n,k);
    

    cout << "Number of ways to paint the fence = " << ans << endl;

    return 0;
}