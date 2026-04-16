// print row wise sum  
#include <iostream>
using namespace std;
int main()
{
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int sumArray[3];
    int z=0;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum=sum+arr[row][col];
        }
        sumArray[z++]=sum;
    }
    
    for(int i=0; i<z; i++){
        cout<<sumArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}