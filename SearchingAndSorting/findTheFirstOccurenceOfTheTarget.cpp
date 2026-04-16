#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>&arr,int target){
    int start=0;
    int end=arr.size()-1;
    int answer=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target ){
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
int main(){
    vector<int>arr={10,20,20,30,30,30,40,40,40,40,40,40,50};
    int target;
    cout<<"Enter the target:";
    cin>>target;
    int answer=firstOccurence(arr,target);
    if(answer==-1){
        cout<<"The element is not present in the array";
    }
    else{
        cout<<"The first occurence of "<<target<<" is: "<<answer<<endl;
    }
    return 0;
}