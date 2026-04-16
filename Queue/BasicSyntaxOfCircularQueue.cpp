// Circular queue
#include <iostream>
using namespace std;
class CircularQueue{
    public:
    int *arr;
    int size;
    int front;
    int back;
    CircularQueue(int capacity){
        arr=new int[capacity];
        size=capacity;
        front=-1;
        back=-1;
    }
    void push(int value){
        if((front==0 && back==size-1)||(back==front-1)){
            cout<<"Overflow"<<endl;
        }
        else if(front==-1 && back==-1){
            front++;
            back++;
            arr[back]=value;
        }
        else if(back==size-1 && front!=0){
            back=0;
            arr[back]=value;
        }
        else{
            back++;
            arr[back]=value;
        }
    }
    void pop(){
        if(front==-1 && back==-1){
            cout<<"Underflow"<<endl;
        }
        else if(front==back){
            arr[front]=-1;
            front=-1;
            back=-1;
        }
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    int getfront(){
        if(arr[front]==-1){
            return -1;
        }
        else{
            int value=arr[front];
            return value;
        }
    }
    int getSize(){
        int g_size;
        // empty 
        if(front==-1 && back==-1){
            g_size=0;
        }
        // rear > front
        else if(back>=front){
            g_size=(back-front)+1;
        }
        
        // rear < front 
        else if(back<front){
            g_size=size-front+back+1;
        }
        return g_size;    
    }
    bool checkEmpty(){
        if(front==-1 && back==-1){
            return true;
        }
        return false;
    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    CircularQueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.pop();
    cq.print();
    return 0;
}