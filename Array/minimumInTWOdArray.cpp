// min in 2d array   
#include <iostream>
#include<climits>
using namespace std;
int minIn2dArray(int arr[][4],int row,int col){
    int min=INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,0,12}
    };
    cout<<minIn2dArray(arr,3,4)<<endl;
    
    return 0;
}