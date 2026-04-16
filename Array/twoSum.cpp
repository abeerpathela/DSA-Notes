#include<iostream>
#include<vector>
using namespace std;
    vector<int> twoSum(vector<int>&a,int targetSum){
        int size=a.size();
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                if((a[i]+a[j])==targetSum){
                        return{i,j};
                }
            }
        }
        return {};
    }
int main(){
    vector<int>a={2,7,11,15};
    vector<int> result=twoSum(a,9);
    if(result.empty()){
        cout<<"The given array contains no pair such that there sum equals to "<<9<<endl;
    }
    else{
        cout<<result.front() << "," << result.back()<<endl;
    } 
}