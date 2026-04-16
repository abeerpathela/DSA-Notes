// Hour glass pattern 
#include <iostream>
using namespace std;
void hourGlassPattern(int n){
    for(int i=1; i<=n; i++){
        for(int s=1; s<=i-1; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*n-2*i+2; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    hourGlassPattern(n);
    return 0;
}