#include<iostream>
using namespace std;

void convertToUppercase(char c){
    char ans=c-'a'+'A';
    cout<<"Uppercase chracter is "<<ans<<endl;
};

void convertToLowercase(char c){
    char ans=c-'A'+'a';
    cout<<"Lowercase chracter is "<<ans<<endl;
}

int main(){
    convertToUppercase('a');
    convertToLowercase('A');
    return 0;
}