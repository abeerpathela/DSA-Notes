// longest subarray with sum k 
#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main()
{
    int a[10]={1,2,-1,1,0,3,6,7,2,3};
    int n=10;
    int k=5;
    unordered_map<int,int>mpp;
    int sum=0;
    int maxLength=0;
    
    for(int i=0; i<n; i++){
        sum=sum+a[i];
        if(sum==k){
            maxLength=max(maxLength,i+1);
        }
        
        int remaining=sum-k;                    // yeh sub array ki length ko katne wale index ko find karne ka kam karta hai 
        if(mpp.find(remaining)!=mpp.end()){
            maxLength=max(maxLength,i-mpp[remaining]);   // yaha pe i-mpp[remaining] subarray length ke length ko find kar deta hai
        }
        
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
    }
    
    cout<<maxLength;
    return 0;
}