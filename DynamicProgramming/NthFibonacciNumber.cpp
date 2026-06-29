#include <iostream>
#include<vector>
using namespace std;

int fibonacciUsingRecurssion(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fibonacciUsingRecurssion(n-1)+fibonacciUsingRecurssion(n-2);
    return ans;
}

int fibonacciUsingMemoization(int n, vector<int> & dp){
    
    if(n==0){
        dp[0]=0;
        return 0;
    }
    if(n==1){
        dp[1]=1;
        return 1;
    }
    
    // STEP3: Check if answer is already present if yes then return 
    if(dp[n]!=-1){
        // iska matlab answer already exist karta hai 
        return dp[n];
    }
    int ans=fibonacciUsingMemoization(n-1,dp)+fibonacciUsingMemoization(n-2,dp);
    // STEP2: Store answer in dp 
    dp[n]=ans;
    return dp[n];
}

int main()
{
    int n;
    cout<<"Enter the number for which you want to find the fibonacci series for:";
    cin>>n;
    // STEP 1: We figured out that it is a 1d dp type problem 
    // create,initialize,pass the dp 
    vector<int>dp(n+1,-1);
    cout<<fibonacciUsingMemoization(n,dp);
    return 0;
}