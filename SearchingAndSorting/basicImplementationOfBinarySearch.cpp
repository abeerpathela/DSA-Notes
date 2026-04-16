#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&a,int target){
    int start=0;
    int end=a.size()-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>a={10,20,30,40,50,60,70};
    int target;
    cout<<"Enter the value of the target: ";
    cin>>target;
    int answer=binarySearch(a,target);
    if(answer==-1){
        cout<<"Element not found in the array";
    }
    else{
        cout<<"Element found in the index "<<answer<<endl;
    }
    return 0;
}