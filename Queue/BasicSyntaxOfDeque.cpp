// Basics of dequeue 
#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> dq; // creation 
    dq.push_front(5);
    dq.push_front(10);
    dq.push_front(15);
    dq.push_front(20); // push_front
    dq.push_back(25); // push_back
    cout<<dq.size()<<endl; // size 
    dq.pop_back(); // pop_back
    dq.pop_front(); // pop_front
    cout<<dq.size()<<endl; // size 
    if(dq.empty()){ // empty or not 
        cout<<"Deque is empty.";
    }
    else{
        cout<<"Deque is not empty.";
    }
    
    return 0;
}