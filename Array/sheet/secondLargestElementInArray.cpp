// second Largest element 
#include<iostream>
#include<vector>
using namespace std;
int secondLargestElement(vector<int>&array){
    int max=array[0];
    int sec_max=-1;
    for(int i=1; i<array.size(); i++){
        if(array[i]>max){
            sec_max=max;
            max=array[i];
        }
        else if(array[i]>sec_max && array[i]<max){
            sec_max=array[i];
        }
    }
    return sec_max;
}
int main(){
    vector<int>array={8,8,7,6,5};
    cout<<secondLargestElement(array)<<endl;
    return 0;
}