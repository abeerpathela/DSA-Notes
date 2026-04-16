#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>&arr,int target){
    int start=0;
    int end=arr.size()-1;
    int answer=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            answer=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return answer;
};
int lastOccurence(vector<int>&arr,int target){
    int start=0;
    int end=arr.size();
    int answer=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            answer=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return answer;
};
int totalOccurences(vector<int>&arr,int target){
    int first=firstOccurence(arr,target);
    int last=lastOccurence(arr,target);
    if(first==-1 || last==-1){
        return 0;
    }
    return (last-first)+1;
};
int main(){
    vector<int>arr={10,20,30,30,40,40,40};
    int target;
    cout<<"Enter the value of target:";
    cin>>target;
    cout<<totalOccurences(arr,target)<<endl;
    return 0;
}