// Check If Linked List is in a cycle or Not (Using Slow and fast approch)
// or
// Floyde's Cycle detection problem

#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
    
};

bool isCycle(Node* &head){
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
};

int main(){
    
    Node* head=new Node(10);
	Node* a=new Node(20);
	Node* b=new Node(30);
	Node* c=new Node(40);
	Node* d=new Node(50);
	Node* e=new Node(60);

	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	
	if(isCycle(head)==true){
	    cout<<"Cycle exists";
	}
	else{
	    cout<<"Cycle does not exist";
	}
    
    return 0;
}