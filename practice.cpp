// Unoptimised way of three sum 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>>threeSum(vector<int>a){
    int size=a.size();
    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    for(int i=0; i<size; i++ ){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                vector<int>temp;
                int first=a[i];
                int second=a[j];
                int third=a[k];
                int sum=first+second+third;
                if(sum==0){
                    bool exists=false;
                    for(auto p :ans){
                        if(p[0]==first && p[1]==second && p[2]==third){
                            exists=true;
                            break;
                        }
                    }
                    if(exists==false){
                        temp.push_back(first);
                        temp.push_back(second);
                        temp.push_back(third);
                        ans.push_back(temp);
                    }
                }
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
            cout<<j<<" , ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}