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
}
int lastOccurence(vector<int>&arr,int target){
    int start=0;
    int end=arr.size()-1;
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
}
vector<int>findRange(vector<int>&arr,int target){
    vector<int>answer;
    int first=firstOccurence(arr,target);
    int last=lastOccurence(arr,target);
    answer.push_back(first);
    answer.push_back(last);
    return answer;
};
int main(){
    vector<int>arr={10,20,20,30,30,30,40,40,40,40,40,40,50};
    int target;
    cout<<"Enter the target:";
    cin>>target;
    vector<int>answer=findRange(arr,target);
    for(auto i:answer){
        cout<<i<<endl;
    }
    return 0;
}