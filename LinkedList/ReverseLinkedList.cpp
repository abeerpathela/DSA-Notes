//  Reverse a linked list 
#include<iostream>
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

void ReverseLinkedList(Node* &head){
    Node* previous=NULL;
    Node* current=head;
    Node* forward;
    
    while(current!=NULL){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
    }
    head=previous;
};

int main(){
    
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
    
    ReverseLinkedList(head);
    
    // printing the linked list
    cout<<"LINKED LIST: "<<endl;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}