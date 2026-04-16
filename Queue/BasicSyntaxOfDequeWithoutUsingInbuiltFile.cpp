// Basic Deque ( without inbuilt header file ) 
#include <iostream>
using namespace std;

class deque{
    public:
    int* arr;
    int front;
    int back;
    int size;
    int cap;
    
    deque(int capacity){
        cap=capacity*2;
        arr = new int[cap];
        front=cap/2;
        back=cap/2;
        size=0;
    };
    void topush_back(int valueToBeInserted){
        if(back==cap-1){
            cout<<"deque is full ";
            return;
        }
        if(front==cap/2 && back==cap/2){
            front--;
        }
        arr[back]=valueToBeInserted;
        back++;
        size++;
    };
    void topush_front(int valueToBeInserted){
        if(front==0){
            cout<<"deque is Full.";
            return;
        }
        if(front==cap/2 && back==cap/2){
            back++;
        }
        arr[front]=valueToBeInserted;
        front--;
        size++;
    };
    int getsize(){
        return size;
    };
    bool checkempty(){
        if(size==0){
            return true;
        }
        return false;
    };
    int getfront(){
        if(checkempty()){
            return -1;
        }
        return arr[front+1];
    };
    int getback(){
        if(checkempty()){
            return -1;
        }
        return arr[back-1];
    };
    void topop_front(){
        if(checkempty()){
            cout<<"The queue is empty .";
            return;
        }
        front++;
        size--;
        if(size==0){ // because if queue becomes empty after pop 
            front=cap/2;
            back=cap/2;
            return;
        }
    };
    void topop_back(){
        if(checkempty()){
            cout<<"The queue is empty.";
            return ;
        }
        back--;
        size--;
        if(size==0){
            front=cap/2;
            back=cap/2;
            return;
        }
    }
    
};

int main()
{
    deque q(5); // creation 
    q.topush_front(10);
    q.topush_front(20);
    q.topush_front(40);
    q.topush_front(50);
    q.topush_back(30); // insertion 
    cout<<"Size of queue is : "<<q.getsize()<<endl; // size of queue 
    // check empty 
    if(q.checkempty()){
        cout<<"Queue is empty."<<endl;
    }
    else{
        cout<<"Queue is not empty."<<endl;
    }
    // front element 
    cout<<q.getfront()<<endl;
    // back element
    cout<<q.getback()<<endl;
    // remove element 
    q.topop_back();
    cout<<"Size of queue is : "<<q.getsize()<<endl; // size of queue 
    return 0;
}