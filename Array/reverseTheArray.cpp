#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void reverseArray(int a[],int size){
    int i=0;
    int j=size-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
void printArray(int a[],int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={1,2,3,4};
    reverseArray(a,4);
    printArray(a,4);
    return 0;
}