// Interleave the first half of queue with second half of queue 
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void print(queue <int> &q){
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}
queue <int> Mix (queue<int>&q){
    int size=q.size();
    int halfSize=size/2;
    if (size<=1){return q;}
    queue<int>firstHalf;
    for(int i=0; i<halfSize;i++){
        int topValue=q.front();
        firstHalf.push(topValue);
        q.pop();
    }
    while(!firstHalf.empty()){
        int topOf_firstHalf=firstHalf.front();
        q.push(topOf_firstHalf);
        firstHalf.pop();
        if(!q.empty()){
        int topOf_q=q.front();
        q.push(topOf_q);
         q.pop();
        }
    }
    if(size%2!=0){
        q.push(q.front());
        q.pop();
    }
    return q;
}
int main(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    Mix(q);
    print(q);
    return 0;
}