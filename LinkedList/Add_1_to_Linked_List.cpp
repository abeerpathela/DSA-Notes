// ADD 1 TO LINKED LIST

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

Node* reverse(Node* &head){
    Node* previous=NULL;
    Node* current=head;
    Node* forward=NULL;
    
    while(current!=NULL){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
    }
    
    head=previous;
    return head;
};

Node* Add_1_to_Linked_List(Node* &head){
    Node* temp=head;
    int carry=1;
    
    while(temp!=NULL){
        int sum=temp->data+carry;
        temp->data=sum%10;
        carry=sum/10;
        
        if(carry==0){
            break;
        }
        if(temp->next==NULL && carry>0){
            temp->next=new Node(0);
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    
    Node* head=new Node(1);
	Node* a=new Node(0);
	Node* b=new Node(0);
	Node* c=new Node(0);
	Node* d=new Node(0);
	Node* e=new Node(0);

	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	
	reverse(head);
	Add_1_to_Linked_List(head);
	reverse(head);
    
    // printing the linked list
	cout<<"LINKED LIST: "<<endl;
	Node* temp=head;
	while(temp!=NULL) {
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
}