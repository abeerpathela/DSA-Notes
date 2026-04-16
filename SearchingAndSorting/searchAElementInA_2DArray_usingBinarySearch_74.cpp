// Search a element in 2d matrix using binary search 
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>&matrix,int target){
    int rows=matrix.size();
    int cols=matrix[0].size();

    int rowIndex=0;
    int colIndex=cols-1;

    while(rowIndex<rows && colIndex>=0){
        int currentElement=matrix[rowIndex][colIndex];

        if(currentElement==target){
            return true;
        }
        if(target>currentElement){
            rowIndex++;
        }
        if(target<currentElement){
            colIndex--;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>matrix={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    if(searchMatrix(matrix,20)){
        cout<<"The element is found in the matrix"<<endl;
    }
    else{
        cout<<"The element is not found in the matrix"<<endl;
    }
    return 0;
}