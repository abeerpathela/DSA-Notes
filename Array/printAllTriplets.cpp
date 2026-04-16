#include<iostream>
#include<vector>
using namespace std;

void printTriplets(vector<int>a){
    int size=a.size();
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++){
                cout<<"("<<a.at(i)<<","<<a.at(j)<<","<<a.at(k)<<")"<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main(){
    vector<int>a={10,20,30,40};
    printTriplets(a);
}