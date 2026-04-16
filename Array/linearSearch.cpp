// Search for an Element in an Array 
#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
};
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int answer=LinearSearch(arr,10,1);
    if(answer==-1){
        cout<<"The element is not found in the array"<<endl;
    }
    else{
        cout<<"Element is found at index "<<answer<<endl;
    }
    return 0;
}