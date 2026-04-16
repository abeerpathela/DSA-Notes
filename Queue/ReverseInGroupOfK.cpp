// reverse in group of k 
#include <iostream>
#include<queue>
#include<stack>
using namespace std;
void ReverseInGroupOfK(queue<int>&q,int k){
    if(q.empty()|| k<=0){
        return;
    }
    else{
        queue<int>result;
        while(!q.empty()){
            stack<int>s;
            int count=0;
            while(!q.empty()&&count<k){
                s.push(q.front());
                q.pop();
                count++;
            }
            while(!s.empty()){
                result.push(s.top());
                s.pop();
            }
        }
        q=result;
    }
};
void print(queue<int>&q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
};
int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    ReverseInGroupOfK(q,2);
    print(q);
    return 0;
}