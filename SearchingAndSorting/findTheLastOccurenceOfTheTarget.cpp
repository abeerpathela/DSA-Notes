#include<iostream>
#include<vector>
using namespace std;
int lastOccurence(vector<int>arr,int target){
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
int main(){
    vector<int>arr={10,20,20,30,30,30,40,40,40,40,50};
    int target;
    cout<<"Enter the target element:";
    cin>>target;
    int answer=lastOccurence(arr,target);
    if(answer==-1){
        cout<<"Element is not found in the array";
    }
    else{
        cout<<"Last occurence of the "<<target<<" in the array is "<<answer<<endl;
    }
    return 0;
}