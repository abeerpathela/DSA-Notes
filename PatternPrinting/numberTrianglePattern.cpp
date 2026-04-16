// Number triangle pattern 
#include<iostream>
using namespace std;
void numberTrianglePattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    numberTrianglePattern(n);
    return 0;
}