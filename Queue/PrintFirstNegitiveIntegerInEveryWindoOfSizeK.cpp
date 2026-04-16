#include <iostream>
#include<vector>
#include<deque>
using namespace std;

vector <int> firstNegitiveInteger(vector<int>&array,int k){
    deque<int>dq;
    vector<int>result;
    for(int i=0; i<k; i++){
        int element=array[i];
        if(element<0){
            dq.push_back(i);
        }
    }
    if(dq.empty()){
        result.push_back(0);
    }
    else{
        int index=dq.front();
        int element=array[index];
        result.push_back(element);
    }
    // for remaining windows 
    for(int i=k ; i<array.size(); i++){
        if(!dq.empty() && i-dq.front()>=k){
            dq.pop_front();
        }
        int element=array[i];
        if(element<0){
            dq.push_back(i);
        }
    }
    if(dq.empty()){
        result.push_back(0);
    }
    else{
        int index=dq.front();
        int element=array[index];
        result.push_back(element);
    }
    return result;
}
int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter window size k: ";
    cin >> k;

    vector<int> ans = firstNegitiveInteger(arr, k);

    cout << "First negative integer in every window: ";
    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}