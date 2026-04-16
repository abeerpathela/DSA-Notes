// insert in a sorted stack 
#include <iostream>
#include<stack>
using namespace std;
void insertInSortedStack(stack <int> &s,int valueToBeInserted){
    if(s.empty()){
        s.push(valueToBeInserted);
        return;
    }
    else{
        int topValue=s.top();
        if(topValue<=valueToBeInserted){
            s.push(valueToBeInserted);
            return;
        }
        s.pop();
        insertInSortedStack(s,valueToBeInserted);
        s.push(topValue);
    }
};
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);
    s.push(8);
    insertInSortedStack(s,6);
    
    // print stack
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}