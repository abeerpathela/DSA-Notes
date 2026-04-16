// Remove duplicates from sorted linked linked list

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

Node* RemoveDuplicates(Node* &head){
    if(head==NULL){
        return NULL;
    }
    else{
    Node* previous=head;
    Node* current=head->next;
    
    while(current!=NULL){
        if(previous->data==current->data){
            previous->next=current->next;
            delete current;
            current=previous->next;
        }
        else if(previous->data!=current->data){
            previous=current;
            current=current->next;
        }
    }
    return head;
    }
};

int main(){
    
    Node* head=new Node(1);
	Node* a=new Node(2);
	Node* b=new Node(2);
	Node* c=new Node(3);
	Node* d=new Node(3);
	Node* e=new Node(4);

	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	
	RemoveDuplicates(head);
	
	// printing the linked list
    cout<<"LINKED LIST: "<<endl;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    return 0;
}