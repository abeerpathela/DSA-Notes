// union of two sorted arrays 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> unionArray(vector<int> &nums1, vector<int> &nums2) {
    vector<int>result;   
    int i=0;
    int j=0;
    while(i<nums1.size() && j<nums2.size()){
        
        if(nums1[i]<nums2[j]){
            if(result.empty() || result.back()!=nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
        }
        
        else if(nums2[j]<nums1[i]){
            if(result.empty() || result.back()!=nums2[j]){
                result.push_back(nums2[j]);
            }
            j++;
        }
        
        else{
            if(result.empty() || result.back()!=nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        
    }
    
    while(i<nums1.size()){
        if(result.empty() || result.back()!=nums1[i]){
            result.push_back(nums1[i]);
        }
        i++;
    }
    
    while(j<nums2.size()){
        if(result.empty() || result.back()!=nums2[j]){
            result.push_back(nums2[j]);
        }
        j++;
    }
    
    return result;
};
int main()
{
    vector<int>nums1={3,4,6,7,9,9};
    vector<int>nums2={1,5,7,8,8};
    vector<int>answer=unionArray(nums1,nums2);
    for(int a:answer){
        cout<<a<<" ";
    }

    return 0;
}