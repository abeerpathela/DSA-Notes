// Basic Queue ( without inbuilt header file ) 
#include <iostream>
using namespace std;

class queue{
    public:
    int* arr;
    int front;
    int back;
    int size;
    
    queue(int capacity){
        arr = new int[capacity];
        size=capacity;
        front=-1;
        back=-1;
    };
    void topush(int valueToBeInserted){
        if(back==size-1){
            cout<<"Queue is full ";
            return;
        }
        if(front==-1 && back==-1){
            front++;
            back++;
        }
        else{
            back++;
        }
        arr[back]=valueToBeInserted;
    };
    int getsize(){
        return (back-front)+1;
    };
    bool checkempty(){
        if(front==-1 && back==-1){
            return true;
        }
        return false;
    };
    int getfront(){
        if(checkempty()){
            return NULL;
        }
        return arr[front];
    };
    int getback(){
        if(checkempty()){
            return NULL;
        }
        return arr[back];
    };
    void topop(){
        if(checkempty()){
            cout<<"The queue is empty .";
            return;
        }
        front++;
        if(front>back){ // because if queue becomes empty after pop 
            front=-1;
            back=-1;
            return;
        }
    };
};

int main()
{
    queue q(3); // creation 
    q.topush(10);
    q.topush(20);
    q.topush(30); // insertion 
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
    q.topop();
    cout<<"Size of queue is : "<<q.getsize()<<endl; // size of queue 
    return 0;
}