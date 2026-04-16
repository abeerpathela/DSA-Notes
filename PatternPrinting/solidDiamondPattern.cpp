// solid diamond pattern  
#include<iostream>
using namespace std;
// void solidDiamondPattern(int n){
//     for(int i=1; i<=n; i++){
//         for(int s=1; s<=n-i; s++){
//             cout<<" ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     n--;
//     for(int i=1; i<=n; i++){
//         for(int s=1; s<=i; s++){
//             cout<<" ";
//         }
//         for(int j=1; j<=(2*n)-(2*i)+1; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }
void solidDiamondPattern(int n){  // more optimised approach 
    int newN=n-1;
    // PART-1
    for(int i=1; i<=newN; i++){
        for(int s=1; s<=newN-i+1; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        } 
        cout<<"\n";
    }
    // PART-2
    for(int i=1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<"\n";
    // PART-3 
    for(int i=1; i<=newN; i++){
        for(int s=1; s<=i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*newN-2*i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    solidDiamondPattern(n);
    return 0;
}