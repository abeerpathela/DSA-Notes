// Using inbuilt header file of stack 
#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack Is Empty.";
    }
    else{
        cout<<"Stack Is Not Empty.";
    }
    return 0;
}