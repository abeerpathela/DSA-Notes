// Reverse in groups of K

#include <iostream>
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

Node* ReverseInGroupOfK(Node* &head, int k) {
	if(head==NULL) {
		return NULL;
	}
	else {
		Node* temp=head;
		int count=0;
		while(temp!=NULL && count<k) {
			temp=temp->next;
			count++;
		}

		if(count<k) {
			return head;
		}
		else {
			int Kcount=1;
			Node* previous=NULL;
			Node* current=head;
			Node* forward=NULL;

			while(current!=NULL && Kcount<=k) {
				forward=current->next;
				current->next=previous;
				previous=current;
				current=forward;
				Kcount++;
			}

			if(forward!=NULL) {
				head->next=ReverseInGroupOfK(forward,k);
			}
			head=previous;
		}
		return head;
	}
};

int main()
{
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

	ReverseInGroupOfK(head,4);

	// Printing Linked List
	cout<<"Linked List:"<<endl;
	Node* temp=head;
	while(temp!=NULL) {
		cout<<temp->data<<endl;
		temp=temp->next;
	}

	return 0;
}