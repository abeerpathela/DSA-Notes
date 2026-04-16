// middle of stack without using recurrsion
#include<iostream>
#include<stack>
using namespace std;
void middleOfStack(stack <int> s){
    int size;
    size=s.size();
    if(size==0){
        cout<<"stack is empty";
    }
    else{
    int midDepth=size/2;
    for(int i=1; i<=midDepth; i++){
        s.pop();
    }
    cout<<"Middle of stack is "<<s.top();
    }
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