// InsertAtHead()
#include<iostream>
using namespace std;

class Node{
    
    public:
    
    int data;
    Node* next;
    
    // Constructor
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};

Node* InsertAtHead(int value, Node* &head, Node* &tail){
    if(head==NULL && tail==NULL){
        // step1 Create a new node 
        Node* newNode= new Node(value);
        // step2 point head and tail to the new Node
        head=newNode;
        tail=newNode;
    }
    else{
        // step1 Create a new Node
        Node* newNode= new Node(value);
        // step2 link the new node to original linked list 
        newNode->next=head;
        // step3 Update the head
        head=newNode;
    }
    return head;
};
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    // Using Function 
    InsertAtHead(10,head,tail);
    InsertAtHead(20,head,tail);
    InsertAtHead(30,head,tail);
    
    //printing the linked list
    Node* temp=head;
    cout<<"Linked List: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}