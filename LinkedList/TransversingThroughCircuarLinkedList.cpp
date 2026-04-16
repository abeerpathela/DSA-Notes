// Transversing Through Circular Linked List
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

Node* InsertInLinkedList(int toBeInserted, Node* &head, Node* &tail){
    Node* newNode= new Node(toBeInserted);
    if(head==NULL && tail==NULL){
        head=newNode;
        tail=newNode;
        tail->next=head;
    }
    else{
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
    }
    return tail;
};

void TransversingCircularLinkedList(int find, Node* &head){
    Node* temp=head;
    int IsFound=0;
    do{
        if(temp->data==find){
            IsFound=1;
            cout<<"Found";
            break;
        }
        temp=temp->next;
    }
    while(temp!=head);
    if(IsFound==0){
        cout<<"Not Found";
    }
};
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    InsertInLinkedList(10,head,tail);
    InsertInLinkedList(20,head,tail);
    InsertInLinkedList(30,head,tail);
    
    int find;
    cout<<"Enter the element to be found in the circular linked list: ";
    cin>>find;
    
    TransversingCircularLinkedList(find,head);
    
    return 0;
}
