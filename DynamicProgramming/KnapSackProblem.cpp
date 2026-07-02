// KnapSack Problem 

#include<iostream>
#include<vector>
using namespace std;

int solveUsingMem(int capacity, vector<int>& val, vector<int>& wt, int index, vector<vector<int>>& dp){
    if(index>=val.size()){
        return 0;
    }
    
    if(dp[index][capacity]!=-1){
        return dp[capacity][index];
    }
    
    int include=0;
    if(wt[index]<=capacity){
        include=val[index]+solveUsingMem(capacity-wt[index],val,wt,index+1,dp);
    }
    int exclude=0+solveUsingMem(capacity,val,wt,index+1,dp);
    int ans=max(include,exclude);
    dp[index][capacity]=ans;
    return dp[index][capacity];
}

int solveUsingTabulation(int W, vector<int>& val, vector<int>& wt){
    vector<vector<int>>dp(W+1,vector<int>(val.size()+1,0));
    
    for(int C=0; C<=W; C++){
        for(int i=val.size()-1; i>=0; i--){
            int include=0;
            if(wt[i]<=C){
                include=val[i]+dp[C-wt[i]][i+1];
            }
            int exclude=0+dp[C][i+1];
            int ans=max(include,exclude);
            dp[C][i]=ans;
        }
    }
    
    return dp[W][0];
}

int solveUsingRecurrsion(int capacity, vector<int>& val,vector<int>& wt,int index){
    // base case 
    if(index>=val.size()){
        return 0;
    }
    // LOGIC (Include and Exclude)
    int include=0;
    if(wt[index]<=capacity){
        include=val[index]+solveUsingRecurrsion(capacity-wt[index],val,wt,index+1);
    }
    int exclude=0+solveUsingRecurrsion(capacity,val,wt,index+1);
    int ans=max(include,exclude);
    return ans;
}


int knapsack(int W, vector<int>& val, vector<int>& wt){
    
    // Using Recurrsion 
    // int index=0;
    // int ans=solveUsingRecurrsion(W,val,wt,index);
    // return ans;
    
    // Using solveUsingMem
    
    // here in recurrsive call 2 parameters are changing so it is a 2d dp type problem 
    
    // vector<vector<int>> dp(val.size() + 1, vector<int>(W + 1, -1));
    
    // int index=0;
    
    // int ans=solveUsingMem(W,val,wt,index,dp);
    // return ans;

    //Using solveUsingTabulation
    
    int ans=solveUsingTabulation(W,val,wt);
    return ans;
}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};

    int W = 50;

    int ans = knapsack(W, val, wt);

    cout << "Maximum value that can be obtained = " << ans << endl;

    return 0;
}