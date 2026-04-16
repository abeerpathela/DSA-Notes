// search in 2d array   
#include <iostream>
using namespace std;
pair <int,int> searchIn2D_Array(int arr[][4],int row,int col,int targetValue){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==targetValue){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main()
{
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    pair<int,int>answer=searchIn2D_Array(arr,3,4,9);
    cout<<answer.first<<" , "<<answer.second<<endl;
    return 0;
}