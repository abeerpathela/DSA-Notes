// create a vector which has 5 rows 3 columns each initialized by -1 
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>arr(5,vector<int>(3,-1));
    for(auto i:arr){
        for(auto p:i){
            cout<<p<<" ";
        }
        cout<<endl;
    }

    return 0;
}