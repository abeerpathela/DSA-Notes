// find peak index in mounted array 
#include <iostream>
#include<vector>
using namespace std;
// int peakIndex(vector<int>&arr){
//     int size=arr.size();
//     for(int i=0; i<size-1; i++){
//         if(arr[i]>arr[i+1]){
//             return i;
//         }
//     }
//     return -1;
// }
int peakIndex(vector<int>&arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}
int main()
{
    vector<int>arr={0,1,2,5,3,1};
    int answer=peakIndex(arr);
    cout<<"Mount point of the array is "<<answer<<endl;
    return 0;
} 