#include<iostream>
using namespace std;
void invertedRightAngleTrianglePattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    invertedRightAngleTrianglePattern(n);
    return 0;
}