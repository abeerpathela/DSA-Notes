class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size=nums.size();
        int count=0;
        vector<int>prefixSum(size,0);

        prefixSum[0]=nums[0];
        for(int i=1; i<size; i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        unordered_map<int,int>m; // ps, frequency 
        for(int j=0; j<size; j++){
            if(prefixSum[j]==k){    // it directly finds if there is any previous entry of the same element 
                count++;
            }
            int val=prefixSum[j]-k;  // it will help to find a value that subarrays that sum leads equal to k 
            if(m.find(val)==m.end()){  // if any frequency o fthat value is not found make it zero in the map 
                m[val]=0;
            }
            else if(m.find(val)!=m.end()){   // if any frequency of that value is found then add that frequency to the count 
                count=count+m[val];
            }
            m[prefixSum[j]]++;
        }
        return count;
    }
};