#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int>&array){
    int size=array.size();
    int start=0;
    int end=size-1;
    while (start<=end){
        if(start==end){
            return array[start];
        }

        int mid=start+(end-start)/2;

        int currentValue=array[mid];

        int leftValue=-1;
        if(mid-1>=0){
            leftValue=array[mid-1];
        }

        int rightValue=-1;
        if(mid+1<size){
            rightValue=array[mid+1];
        }

        if(currentValue!=leftValue && currentValue!=rightValue){
            return currentValue;
        }
        if(currentValue==leftValue && currentValue!=rightValue){
            int pairStartingIndex=mid-1;
            if(pairStartingIndex%2!=0){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(currentValue!=leftValue && currentValue==rightValue){
            int pairStartingIndex=mid;
            if(pairStartingIndex%2!=0){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int>array={1,1,2,2,3,3,4,5,5,6,6};
    cout<<findUniqueElement(array)<<endl;
    return 0;
}