#include<iostream>
using namespace std;
void printTwice(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]*2<<" ";
    }
    cout<<endl;
};
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printTwice(arr,10);
    return 0;
}