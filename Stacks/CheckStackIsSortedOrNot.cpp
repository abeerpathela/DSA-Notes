// check is stack sorted or not 
#include <iostream>
#include<stack>
using namespace std;
bool isSorted(stack <int> &s){
    if(s.size()<=1){
        return true;
    }
    int top1=s.top();
    s.pop();
    int top2=s.top();
    bool result=(top1>=top2)&&isSorted(s);
    s.push(top1);
    return result;
};
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    if(isSorted(s)){
        cout<<"Yes stack is sorted.";
    }
    else{
        cout<<"Stack is not sorted.";
    }
    return 0;
}