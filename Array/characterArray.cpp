#include<iostream>
using namespace std;
void inputInArray(char arr[],int size){
    for(int i=0; i<size; i++){
        cout<<"Enter the element for the index "<<i;
        cin>>arr[i];
    }
};
void printArray(char arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
};
int main(){
    char arr[10];
    inputInArray(arr,10);
    printArray(arr,10);
    return 0;
}