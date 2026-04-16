// optimised way three sum 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>a){
    vector<vector<int>>ans;
    int size=a.size();
    sort(a.begin(),a.end());
    
    for(int i=0; i<size; i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        int left=i+1;
        int right=size-1;
        
        while(left<right){
            int sum=a[i]+a[left]+a[right];
            if(sum==0){
                ans.push_back({a[i],a[left],a[right]});
                left++;
                right--;
                
                while(left<right && a[left]==a[left-1]){
                    left++;
                }
                while(left<right && a[right]==a[right-1]){
                    right--;
                }
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return ans;
};

int main(){
    vector<int>a={-1,0,1,2,-1,-4};
    vector<vector<int>>answer=threeSum(a);
    for(auto i: answer){
        cout<<"[ ";
        for(auto j: i){
            if(i[i.size()-1]==j){
                cout<<j;
            }
            else{
                cout<<j<<" , ";
            }
        }
        cout<<"]"<<endl;
    }
    return 0;
}