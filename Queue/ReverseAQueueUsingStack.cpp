// Reverse a queue  (Using Stack)
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue <int> &q){
    stack <int> s;
    while(!q.empty()){
        int topQueue=q.front();
        s.push(topQueue);
        q.pop();
    }
    while(!s.empty()){
        int ValueToBeInserted=s.top();
        s.pop();
        q.push(ValueToBeInserted);
    }
};
void print(queue <int> &q){
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}
int main(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverseQueue(q);
    print(q);
    return 0;
}
