#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>a(4,10);
    list<int>b(a);
    // a.emplace_back(1);
    // a.push_back(2);
    // a.push_front(3);
    // a.push_front(5);
    cout<<"Start of a:"<<endl;
    for(int val: a){
        cout<<val<<endl;
    }
    cout<<"End"<<endl;
    cout<<"Start of b:"<<endl;
    for(int val: b){
        cout<<val<<endl;
    }
    cout<<"End"<<endl;
    return 0;
}