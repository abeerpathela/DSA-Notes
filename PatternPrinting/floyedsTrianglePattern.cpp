// Number triangle pattern 
#include<iostream>
using namespace std;
void floyedTrianglePattern(int n){
    int start=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<start++<<" ";
        }
        cout<<"\n";
    }
};
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    floyedTrianglePattern(n);
    return 0;
}