#include<iostream>
#include <climits>
using namespace std;
int findMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
};
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<findMax(arr,10);
    return 0;
}