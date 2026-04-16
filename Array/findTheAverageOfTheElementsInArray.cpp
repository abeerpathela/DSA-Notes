#include<iostream>
using namespace std;
int AverageOfTheElementsInArray(int array[],int size){
    int ans=0;
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+array[i];
    }
    ans=sum/size;
    return ans;
};
int main(){
    int arr[10]={1,1,1,1,1,1,1,1,1,1};
    int size=sizeof(arr)/sizeof(int);
    cout<<AverageOfTheElementsInArray(arr,size)<<endl;

    return 0;
}