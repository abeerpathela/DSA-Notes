#include<iostream>
using namespace std;
void hollowRightAngleTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<((i==n||j==1||j==i)?"*":" ");
        }
        cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    hollowRightAngleTriangle(n);
    return 0;
}