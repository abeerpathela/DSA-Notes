#include<iostream>
using namespace std;
void solidRectangle(int n,int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"*";
        }
        cout<<endl;
    }
};
int main(){
    int n,m;
    cout<<"Enter the length of the rectangle: ";
    cin>>n;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>m;
    solidRectangle(n,m);
    return 0;
}