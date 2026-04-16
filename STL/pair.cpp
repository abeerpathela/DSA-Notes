#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;
int main(){
    // pair<int,string> a[3];
    // for(int i=0; i<2; i++){
    //     int element;
    //     cout<<"Enter a number for index "<<i<<": ";
    //     cin>>element;
    //     a[i]=make_pair(element,"Not Visited");
    // }
    // for(int i=0; i<2; i++){
    //     cout<<endl<<a[i].first<<endl<<a[i].second<<endl;
    // }

    pair<int,pair<char,int>> p={1,{'a',3}};
    cout<<p.first<<endl;    
    cout<<p.second.first<<endl;     // accessing the pair value inside the pair 

    // CREATING VECTOR OF PAIRS 
    vector<pair<int,int>>vec={{1,2},{3,4},{5,6}};
    vec.push_back({7,8});
    vec.emplace_back(9,10);

    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}