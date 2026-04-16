#include<iostream>
using namespace std;
void count(int array[],int size){
    int count_0=0;
    int count_1=0;
    int count_2=0;
    for(int i=0; i<size; i++){
        if(array[i]==0){
            count_0++;
        }
        else if(array[i]==1){
            count_1++;
        }
        else if(array[i]==2){
            count_2++;
        }
        else{
            continue;
        }
    }
    cout<<"Count of 0 in array -> "<<count_0<<endl;
    cout<<"Count of 1 in array -> "<<count_1<<endl;
    cout<<"Count of 2 in array -> "<<count_2<<endl;
};
int main(){
    int arr[10]={1,1,1,0,0,0,0,0,0,2};
    count(arr,10);
    return 0;
}