
// Detect Starting Node of cycle 
// or
// Return the node where the cycle is starting (Using Fast And Slow Method)

#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    // constructor
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
    
};

Node* DetectStart(Node* &head){
    Node* StartOfCycle=NULL;
    
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast){
            fast=head;
            while(fast!=slow){
                slow=slow->next; 
                fast=fast->next;
            }
            return slow;
        }
    }
    
    if(fast==NULL){
        return NULL;
    }
    
    
    return StartOfCycle;
};

int main(){
    Node* head1=new Node(9999);
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(0);
    
    head1->next=a;
    a->next=b;
    b->next=c;
    c->next=a;
    
    Node* cycleStart=DetectStart(head1);
    
    if(cycleStart==NULL){
        cout<<"There is no cycle";
    }
    else{
        cout<<"There is a cycle."<<endl<<cycleStart->data;
    }
    
    return 0;
}
