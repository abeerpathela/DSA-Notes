// find the pivot index of a rotated sorted array 
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
int main()
{
    vector<int>nums={4,5,6,7,0,1,2};
    cout<<pivotIndexInASortedRotatedArray(nums)<<endl;
    return 0;
}