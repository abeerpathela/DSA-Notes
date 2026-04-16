// Larget element 
#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int>&array){
    int max=array[0];
    for(int i=1; i<array.size(); i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
int main(){
    vector<int>array={3,3,0,99,-40};
    cout<<largestElement(array)<<endl;
    return 0;
}