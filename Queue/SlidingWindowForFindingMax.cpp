#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector <int> findingMax(vector<int>&array,int k){
    vector <int> result;
    deque<int>dq;
    for(int i=0; i<array.size(); i++){
        while(!dq.empty() && dq.front()<=i-k){      // remove indices from front if they are out of current window
            dq.pop_front();
        }
        while(!dq.empty() && array[dq.back()]<=array[i]){   // remove smaller elements from back
                dq.pop_back();
        }
        dq.push_back(i);    // add current index 

        if(i>=k-1){         // store the maximum for current window 
            result.push_back(array[dq.front()]);
        }
    }
    return result;
};

int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    vector<int> array(size);
    for(int i=0; i<size; i++){
        int ele;
        cout<<"Enter the element on the index "<<i<<": ";
        cin>>ele;
        array[i]=ele;
    }
    int windowSize;
    cout<<"Enter window size:";
    cin>>windowSize;

    vector <int> solution=findingMax(array,windowSize);
    for(auto i: solution){
        cout<<i<<" ";
    }
    return 0;
}