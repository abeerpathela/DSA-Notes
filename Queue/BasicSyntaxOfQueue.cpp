// Basics of queue 
#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> q; // creation 
    q.push(10);
    q.push(20);
    q.push(30); // insertion 
    cout<<"Size of queue is : "<<q.size()<<endl; // size of queue 
    // check empty 
    if(q.empty()){
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"Queue is not empty."<<endl;
    }
    // front element 
    cout<<q.front()<<endl;
    // back element
    cout<<q.back()<<endl;
    // remove element 
    q.pop();
    return 0;
}