// Reversing the stack using recurrsion 
#include <iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int topValue=s.top();
    s.pop();
    insertAtBottom(s,value);
    s.push(topValue);
};
void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int topValue=s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,topValue);
};
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    reverseStack(s);
    
    // Printing stack 
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}