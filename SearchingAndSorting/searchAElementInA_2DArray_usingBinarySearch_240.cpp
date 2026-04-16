// Search a element in 2d matrix using binary search 
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>&matrix,int target){
    int rows=matrix.size();
    int cols=matrix[0].size();
    for(int rowIndex=0; rowIndex<rows; rowIndex++ ){
        int start=0;
        int end=cols-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            int currentElementFromMatrix=matrix[rowIndex][mid];
            
            if(currentElementFromMatrix==target){
                return true;
            }
            if(target>currentElementFromMatrix){
                start=mid+1;
            }
            if(target<currentElementFromMatrix){
                end=mid-1;
            }
        }
    }
    return false;
}
int main(){
    vector<vector<int>>matrix={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,28}
    };
    if(searchMatrix(matrix,12)){
        cout<<"The element is found in the matrix"<<endl;
    }
    else{
        cout<<"The element is not found in the matrix"<<endl;
    }
    return 0;
}