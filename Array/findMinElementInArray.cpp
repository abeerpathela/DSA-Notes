#include<iostream>
#include<climits>
using namespace std;
int getMinimum(int array[],int size){
    int min=INT_MAX;
    for(int i=0; i<size; i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
};
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<getMinimum(arr,10);
    return 0;
}