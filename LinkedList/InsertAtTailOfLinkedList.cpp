// InsertAtTail()

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

Node* InsertAtTail(int value, Node* &head,Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newNode= new Node(value);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode= new Node(value);
        tail->next=newNode;
        tail=newNode;
    }
    return tail;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    InsertAtTail(20,head,tail);
    InsertAtTail(10,head,tail);
    InsertAtTail(30,head,tail);
    
    // Printing Linked List
    Node* temp=head;
    cout<<"Linked List: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}