// middle of stack  using recurrsion
#include<iostream>
#include<stack>
using namespace std;
void middleOfStackHELP(stack <int> &s,int currentDepth,int size){
    if(currentDepth==size/2){
        cout<<"Middle Of stack is "<<s.top();
        return;
    }
    int topValue;
    topValue=s.top();
    s.pop();
    middleOfStackHELP(s,currentDepth+1,size);
    s.push(topValue);
};
void middleOfStack(stack <int> &s){
    int sizeOfStack;
    sizeOfStack=s.size();
    if(sizeOfStack==0){
        cout<<"The stack is empty";
    }
    int currentDepth=0;
    middleOfStackHELP(s,currentDepth,sizeOfStack);
};
int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    middleOfStack(s);
    return 0;
}