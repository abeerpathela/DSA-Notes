// Reverse a queue  (Using Recurrsion)
#include<iostream>
#include<queue>
using namespace std;
void reverseQueue(queue <int> &q){
    if(q.empty()){
        return;
    }
    int frontValue=q.front();
    q.pop();
    reverseQueue(q);
    q.push(frontValue);
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