// find the element in a almost sorted array 
#include<iostream>
#include<vector>
using namespace std;
int findTheElement(vector<int>&array,int k){
    int size=array.size();
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(array[mid]==k){
            return mid;
        }
        if(array[mid+1]==k){
            return mid+1;
        }
        if(array[mid-1]==k){
            return mid-1;
        }
        if(k>array[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>array={3,5,10,9,11};
    int target;
    cout<<"Enter the element which is to be found in the almosted sorted array: ";
    cin>>target;
    int answer=findTheElement(array,target);
    if(answer==-1){
        cout<<"The targeted element is not found in the array"<<endl;
    }
    else{
        cout<<target<<" is found at the index "<<answer<<" in the given array. "<<endl;
    }
    return 0;
}