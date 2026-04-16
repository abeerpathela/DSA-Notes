// search in a sorted rotated array 
#include <iostream>
#include<vector>
using namespace std;
int pivotIndexInASortedRotatedArray(vector<int>&nums){
    int size=nums.size();
    int start=0;
    int end=size-1;
    int answer=-1;
    
    if(nums[start]<nums[end]){      // this checks if the array is rotated or not 
        return -1;
    }
    
    while(start<end){
        int mid=start+(end-start)/2;
        if((mid+1<size)&&(nums[mid]>nums[mid+1])){
            return mid;
        }
        if (nums[mid] >= nums[start]) {
            start = mid + 1;
        }
        else{
            end=mid;
        }
    }
    return -1;
}
int binarySearch(int start,int end,vector<int>&array,int target){
    while(start<=end){
        int mid=(start)+(end-start)/2;
        int currentMidElement=array[mid];
        if(currentMidElement==target){
            return mid;
        }
        if(target>currentMidElement){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int searchInASortedRotatedArray(vector<int>&nums,int target){
    int pivotIndex=pivotIndexInASortedRotatedArray(nums);
    int size=nums.size();
    if(target>=nums[0] && target<=nums[pivotIndex]){
        int ans=binarySearch(0,pivotIndex,nums,target);
        return ans;
    }
    else{
        int ans=binarySearch(pivotIndex,size-1,nums,target);
        return ans;
    }
    return -1;
}
int main()
{
    vector<int>nums={4}; 
    cout<<searchInASortedRotatedArray(nums,1)<<endl;
    return 0;
}