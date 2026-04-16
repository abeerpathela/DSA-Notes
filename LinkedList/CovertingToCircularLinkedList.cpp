// LinkedList to CircularLinkedList

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

void CovertingToCircularLinkedList(Node* &head, Node* &tail){
    tail->next=head;
}

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
	
	CovertingToCircularLinkedList(head,tail);
	
	Node* NodeNextToTail=tail->next;
	cout<<NodeNextToTail->data<<endl;
	return 0;
}