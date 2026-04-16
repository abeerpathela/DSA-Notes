// Rotate 2D array by 90 degree in clockwise direction 
#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>>rotate90(vector<vector<int>>&matrix){
    int row_size=matrix.size();
    int col_size=matrix[0].size();
    
    vector<vector<int>>answer(col_size,vector<int>(row_size));
    
    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            answer[j][row_size-1-i]=matrix[i][j];
        }
    }
    return answer;
};

int main()
{
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6}
    };
    vector<vector<int>>answer=rotate90(matrix);
    for(auto i:answer){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}