#include<iostream>
using namespace std;
void rightAngleTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    rightAngleTriangle(n);
    return 0;
}