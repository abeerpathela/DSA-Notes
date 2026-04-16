// Leaders in an array problem 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>leadersInArray(vector<int>& nums){
    vector<int>result;
    int maxRight=nums[nums.size()-1];
    
    result.push_back(maxRight);
    
    for(int i=nums.size()-2; i>=0; i--){
        if(nums[i]>=maxRight){
            result.push_back(nums[i]);
            maxRight=nums[i];
        }
    }
    
    reverse(result.begin(),result.end());  // to get the original order 
    
    return result;
}

int main()
{
    vector<int>nums={1,2,5,3,1,2};
    vector<int>answer=leadersInArray(nums);
    for(int i:answer){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}