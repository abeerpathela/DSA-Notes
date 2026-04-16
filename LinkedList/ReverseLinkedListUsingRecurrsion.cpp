//  Reverse a linked list Using Recurrsion
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

void ReverseLinkedList(Node* &head,Node* &previous,Node* &current,Node* &forward) {
	if(current==NULL) {
		head=previous;
		return;
	}
	forward=current->next;
	current->next=previous;
	previous=current;
	current=forward;
	ReverseLinkedList(head,previous,current,forward);
};

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
	
	Node* current=head;
	Node* previous=NULL;
	Node* forward;
	ReverseLinkedList(head,previous,current,forward);

	// printing the linked list
	cout<<"LINKED LIST: "<<endl;
	Node* temp=head;
	while(temp!=NULL) {
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
}