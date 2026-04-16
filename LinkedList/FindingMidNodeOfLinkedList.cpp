//  Finding mid node of the linked list
#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	// constructor
	Node(int value) {
		this->data=value;
		this->next=NULL;
	}
};

void MidNodeOfLinkedList(Node* &head){
    Node* slow=head;
    Node* fast=head;
    
    while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<endl<<slow->data;
}

int main() {

	Node* head=new Node(10);
	Node* a=new Node(20);
	Node* b=new Node(30);
	Node* c=new Node(40);
	Node* d=new Node(50);
	Node* tail=new Node(60);

	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=tail;
	
	MidNodeOfLinkedList(head);
	
	return 0;
}