// shift the elements of array by one position 
#include<iostream>
#include<vector>
using namespace std;

vector<int> rightShiftArray(const vector<int>& arr){
    int size=arr.size();
    vector<int>arr2=arr;
    int lastElement=arr2[size-1];
    
    for(int i=size-1; i>=0; i-- ){
        if(i!=0){
            arr2[i]=arr2[i-1];
        }
        else{
            arr2[0]=lastElement;
        }
    }
    
    return arr2;
};

int main(){
    vector<int>arr={10,20,30,40};
    vector<int>answer=rightShiftArray(arr);
    for(auto i: answer){
        cout<<i<<" ";
    }
    return 0;
}