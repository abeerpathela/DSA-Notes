#include<iostream>
using namespace std;

void printSquare(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
};

int main(){
     int n;
     cout<<"Enter the value for n: ";
     cin>>n;
    printSquare(n);
    return 0;
}