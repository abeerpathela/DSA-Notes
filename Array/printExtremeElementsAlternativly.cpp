#include<iostream>
#include<vector>
using namespace std;

void extremeElements(vector<int>&a){
    auto i=a.begin();
    auto j=a.end()-1;
    while(i<j){
        cout<<*i<<" "<<*j<<endl;
        i++;
        j--;
    }
}

int main(){
    vector<int>a={10,20,30,40};
    extremeElements(a);
}