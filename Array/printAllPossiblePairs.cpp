#include<iostream>
#include<vector>
using namespace std;

void printPairs(vector<int>a){
    int size=a.size();
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<a.at(i)<<","<<a.at(j)<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    vector<int>a={10,20,30,40};
    printPairs(a);
}