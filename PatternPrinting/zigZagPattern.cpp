#include<iostream>
using namespace std;
void zigZagPattern(int n){
    for(int i=1; i<=n; i++){
        for(int s=1; s<=i-1; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*n-2*i+3; j++){
            cout<<((j==1||j==2*n-2*i+3)?'*':' ');
        }
        cout<<"\n";
    }
    for(int i=1; i<=n; i++){
        cout<<" ";
    }
    cout<<'*'<<endl;
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i+1; j++){
            cout<<((j==1||j==2*i+1)?'*':' ');
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    zigZagPattern(n);
    return 0;
}