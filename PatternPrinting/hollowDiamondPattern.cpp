// hollow diamond pattern  
#include<iostream>
using namespace std;
void hollowDiamondPattern(int n){
    int newN=n-1;
    for(int i=1; i<=newN; i++){
        for(int s=1; s<=newN-i+1; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<((j==1||j==2*i-1)?'*':' ');
        }
        cout<<"\n";
    }
    for(int i=1; i<=2*n-1; i++ ){
        cout<<((i==1||i==2*n-1)?'*':' ');
    }
    cout<<"\n";
    for(int i=1; i<=newN; i++){
        for(int s=1; s<=i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*newN-2*i+1; j++){
            cout<<((j==1||j==2*newN-2*i+1)?'*':' ');
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    hollowDiamondPattern(n);
    return 0;
}