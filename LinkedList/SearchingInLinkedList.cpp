// Searching in Linked List

#include<iostream>
using namespace std;

class Node {
    public:
	int data;
	Node* next;

	// Constructor
	Node(int value) {
		this->data=value;
		this->next=NULL;
	}

};
Node* InputInLinkedList(int toBeInserted, Node* &head, Node* &tail) {
	Node* temp=head;
	Node* NodeToBeAdded=new Node(toBeInserted);
	if(head==NULL && tail==NULL) {
		head=NodeToBeAdded;
		tail=NodeToBeAdded;
	}
	else {
		tail->next=NodeToBeAdded;
		tail=NodeToBeAdded;
	}
	return tail;
};

void SearchInLinkedList(int find, Node* &head) {
	Node* temp=head;
	int IsFound=0;
	while(temp!=NULL) {
		if(temp->data==find) {
			cout<<endl<<"Found!";
			IsFound=1;
			break;
		}
        temp=temp->next;
	}
	if(IsFound==0) {
		cout<<endl<<"Not Found!";
	}
};

int main() {
	Node* head=NULL;
	Node* tail=NULL;
	int HowManyValuesToBeInserted;
	cout<<"Number of values to be inserted in linked list: ";
	cin>>HowManyValuesToBeInserted;
	for(int i=1; i<=HowManyValuesToBeInserted; i++) {
		int toBeInserted;
		cout<<"Enter the value to be Inserted: ";
		cin>>toBeInserted;
		InputInLinkedList(toBeInserted,head,tail);
	}
	int search;
	cout<<"Enter the element to be searched: ";
	cin>>search;
	SearchInLinkedList(search,head);
	return 0;
}