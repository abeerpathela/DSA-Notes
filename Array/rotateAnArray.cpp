// rotate an array 
#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&arr,int k){
    //  STEP-1 creating a temporary vector of size k which will store the values of last last elements 
    int size=arr.size();
    
    // this normalization of k is very important as it will tell how many times we have to rotate the array to get the answer 
    k=k%size;       // this normalizes the value of k as what if the sie of the array is 7 and 
    //we have to rotate it 7 times then this variable will return answer 0 so 0 times the whole code will be rotated and
    // we have an array of size 7 and value of k is 3 so this will return answer as 1 so now we know we have to rotate this array 1 time only 
    
    vector<int>temp;         
    // storing the last elements 
    for(int i=size-k; i<size; i++){
        int value=arr[i];
        temp.push_back(value);
    }
    // STEP-2 shift the loop of the valid indexes 
    for(int i=size-1; i>=0; i--){
        if(i-k>=0){
            arr[i]=arr[i-k];
        }
    }
    // STEP-3 copy from the temp array 
    for(int i=0; i<k; i++){
        arr[i]=temp[i];
    }
};
int main(){
    vector<int>arr={10,20,30,40,50,60,70};
    int k=3;
    rotate(arr,k);
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}