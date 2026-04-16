#include<iostream>
using namespace std;
// void printHollow(int n){
//     for(int i=1; i<=n; i++){
//         if(i==1 || i==n){
//             for(int j=1; j<=n; j++){
//                cout<<"*"; 
//             }
//         }
//         else{
//             for(int j=1; j<=n; j++){
//                 if(j==1 || j==n){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }
void printHollow(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<((i==1||i==n||j==1||j==n)?"*":" ");
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    printHollow(n);
    return 0;
}