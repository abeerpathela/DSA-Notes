#include<iostream>
using namespace std;
void multiplyEachElementBy10(int array[],int size){
    for(int i=0; i<size; i++){
        array[i]=array[i]*10;
    }
};
void printArray(int array[],int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
};
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    multiplyEachElementBy10(arr,10);
    printArray(arr,10);
    return 0;
}