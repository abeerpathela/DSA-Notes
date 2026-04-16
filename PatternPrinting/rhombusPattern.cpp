#include<iostream>
using namespace std;
void rhombusPattern(int n){
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
};
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    rhombusPattern(n);
    return 0;
}