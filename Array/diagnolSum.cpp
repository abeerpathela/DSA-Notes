// DiagnolSum
#include<iostream>
#include<vector>
using namespace std;
// int DiagnolSum(vector<vector<int>>&mat){     // MY APPROACH
//     int sum=0;
//     // loop of same i,j 
//     int size=mat.size();
//     if(size==1){
//         return mat[0][0];
//     }
//     for(int i=0; i<size; i++){
//         sum=sum+mat[i][i];
//     }
//     // loop of diffrent i,j 
//     for(int i=0; i<size; i++){
//         int j=size-1-i;
//         if(i==j){
//             continue;
//         }
//         sum=sum+mat[i][j];  
//     }
//     return sum;
// }
int DiagnolSum(vector<vector<int>>&mat){        // GOOD APPROACH 
    int sum=0;
    int rows=mat.size();
    int cols=mat[0].size();
    int size=mat.size();
    for(int i=0; i<size; i++){
        sum=sum+mat[i][i];
        sum=sum+mat[i][size-1-i];
    }
    // removing duplicate that have been added to sum 
    if(size%2!=0){
        sum=sum-mat[size/2][size/2];
    }
    return sum;
}
int main(){
    vector<vector<int>>arr(4,vector<int>(4,1));
    cout<<endl<<DiagnolSum(arr);
    return 0;
}