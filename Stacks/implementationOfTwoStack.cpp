// Implementation of 2 stacks in an array 
#include <iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;
    Stack(int capacity){
        arr=new int[capacity];
        top1=-1;
        size=capacity;
        top2=capacity;
    }
    void push1(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow";            
        }
        else{
            top1++;
            arr[top1]=value;
        }
    }
    void push2(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow";
        }
        else{
            top2--;
            arr[top2]=value;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack UnderFlow";
        }
        else{
            top1--;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack UnderFlow";
        }
        else{
            top2++;
        }
    }
    int IsTop1(){
        if(top1==-1){
            cout<<"No element inserted";
            return -1;
        }
        else{
            return arr[top1];
        }
    }
    int IsTop2(){
        if(top2==size){
            cout<<"No element inserted";
            return -1;
        }
        else{
            return arr[top2];
        }
    }
    int GetSize1(){
        return top1+1;
    }
    int GetSize2(){
        return size-top2;
    }
    bool empty1(){
        if(top1==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool empty2(){
        if(top2==size){
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
   s.push1(10);
   s.push2(20);
   s.push1(30);
   cout<<s.GetSize1()<<endl;
   cout<<s.IsTop1()<<endl;
   s.pop1();
   cout<<s.IsTop2()<<endl;
   if(s.empty1() && s.empty2()){
    cout<<"Both Stack are Empty.";
   }
   else{
    cout<<"Atleast one Stack Is Not Empty.";
   }

    return 0;
}