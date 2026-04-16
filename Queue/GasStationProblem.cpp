// Gas Station Problem 
#include<iostream>
using namespace std;
int canCompleteCircuit(int gas[],int cost[],int sizeOfArray){
    int total_tank=0;
    int current_tank=0;
    int start_index=0;
    for(int i=start_index; i<sizeOfArray; i++){
        int v=gas[i]-cost[i];
        total_tank=total_tank+v;
        current_tank=current_tank+v;
        if(current_tank<0){
            start_index=i+1;
            current_tank=0;
        }
    }
    if(total_tank>=0){
        return start_index;
    }
    return -1;
    
};
int main(){
    int gas[]  = {1, 2, 3, 4, 5};
    int cost[] = {3, 4, 5, 1, 2};
    int sizeOfArray=sizeof(gas)/sizeof(gas[0]);
    cout<<canCompleteCircuit(gas,cost,sizeOfArray);
    return 0;
}