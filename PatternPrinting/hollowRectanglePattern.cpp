#include<iostream>
using namespace std;
void hollowRectangle(int n,int m){
    for(int i=1; i<=n; i++ ){
        for(int j=1; j<=m; j++){
            cout<<((i==1||i==n||j==1||j==m)?"*":" ");
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter the length of the rectangle:";
    cin>>n;
    cout<<"Enter the breadth of the retangle:";
    cin>>m;
    hollowRectangle(n,m);
    return 0;
}