#include<iostream>
using namespace std;
void NumberOfEvenAndOddInArray(int arr[],int size){
    int count_even=0;
    int count_odd=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else if(arr[i]%2!=0){
            count_odd++;
        }
        else{
            continue;
        }
    }
    cout<<"Number of even elements in array -> "<<count_even<<endl;
    cout<<"Number of odd elements in array -> "<<count_odd<<endl;
};
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    NumberOfEvenAndOddInArray(arr,10);
    return 0;
}