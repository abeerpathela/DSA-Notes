#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// void SortZeroAndOne(int a[],int size){
//     int zero[100];
//     int i_1=0;
//     int one[100];
//     int i_2=0;
//     for(int i=0; i<size; i++){
//         if(a[i]==0){
//             zero[i_1++]=a[i];
//         }
//         else if(a[i]==1){
//             one[i_2++]=a[i];
//         }
//         else{
//             continue;
//         }
//     }
//     int temp=0;
//     for(int i=0; i<i_1; i++){
//         a[temp++]=zero[i];
//     }
//     for(int i=0; i<i_2; i++){
//         a[temp++]=one[i];
//     }
// }
// void SortZeroAndOne(int a[],int size){  
//     int count_zero=0;
//     int count_one=0;
//      // counting Approach 
//     for(int i=0; i<size; i++){
//         if(a[i]==0){
//             count_zero++;
//         }
//         else if(a[i]==1){
//             count_one++;
//         }
//         else{
//             continue;
//         }
//     }
//     int temp=0;
//     for(int t=0; t<count_zero; t++){
//         a[temp++]=0;
//     }
//     for(int t=0; t<count_one; t++){
//         a[temp++]=1;
//     }
// };

void printVector(vector<int>a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// vector<int> SortZeroAndOne(vector<int>&a,int size){         // sort method 
//     vector<int>given=a;
//     sort(given.begin(),given.end());
//     a=given;
//     return a;
// }
// vector<int> SortZeroAndOne(vector<int>&a,int size){     // count method 
//     vector<int>given=a;
//     int count_zero=0;
//     int count_one=0;
//     for(auto i: given){
//         if(i==0){
//             count_zero++;
//         }
//         else if(i==1){
//             count_one++;
//         }
//         else{
//             continue;
//         }
//     }
//     // filing the number of zero we have counted 
//     fill(given.begin(),given.begin()+count_zero,0);
//     // filing the number of one we have counted
//     fill(given.begin()+count_zero,given.end(),1);
//     return given;
// }
vector<int>SortZeroAndOne(vector<int>&arr){
    int count_zero=0;
    for(auto i: arr){
        if(i==0){
            count_zero++;
        }
    }
    
    for(int j=0; j<count_zero; j++){
        arr[j]=0;
    }
    for(int j=count_zero; j<arr.size(); j++){
        arr[j]=1;
    }
    
    return arr;
}
int main(){
    vector<int>a={0,1,0,1,0,1};
    int size=a.size();
    vector<int>answer;
    answer=SortZeroAndOne(a);
    printVector(answer);
    
    return 0;
}