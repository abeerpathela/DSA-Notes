// Without using inbuilt header file  of stack 
#include <iostream>
using namespace std;

class Stack{
    
    public:
    
    int *arr;
    int top;
    int size;
    
    Stack(int capacity){
        arr=new int[capacity];
        top=-1;
        size=capacity;
        
    }
    
    void push(int value){
        if(top==size-1){
            cout<<"Stack Overflow";
        }
        else{
            top++;
            arr[top]=value;
        }
    }
    
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow";
        }
        else{
            top--;
        }
    }
    
    int Istop(){
        if(top==-1){
            cout<<"No element inserted";
            return -1;
        }
        else{
            return arr[top];
        }
    }
    
    int Getsize(){
        return top+1;
    }
    
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
};

int main()
{
   Stack s(3);
   s.push(10);
   s.push(20);
   s.push(30);
   cout<<s.Getsize()<<endl;
   cout<<s.Istop()<<endl;
   s.pop();
   cout<<s.Istop()<<endl;
   if(s.empty()){
    cout<<"Stack Is Empty.";
   }
   else{
    cout<<"Stack Is Not Empty.";
   }
    return 0;
}