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
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int value=101;
    insertAtBottom(s,value);
    
    // Printing stack 
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}