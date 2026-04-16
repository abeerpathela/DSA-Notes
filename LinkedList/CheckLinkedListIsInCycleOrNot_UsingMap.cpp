// Check If Linked List is in a cycle or Not (Using map)

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

bool isVisited(Node* &head){
    map<Node*,bool> Visited;
    Node* temp=head;
    while(temp!=NULL){
        if(Visited[temp]==true){
            return true;
        }
        else{
            Visited[temp]=true;
            temp=temp->next;
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
	e->next=head;
	
	if(isVisited(head)==true){
	    cout<<"Cycle exists";
	}
	else{
	    cout<<"Cycle does not exist";
	}
    
    return 0;
}