// hollow pyramid pattern 
#include<iostream>
using namespace std;
void hollowPyramidPattern(int n){
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            if((i==n)||(j==1||j==2*i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
};
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    hollowPyramidPattern(n);
    return 0;
}