// Insert at given position
#include <iostream>
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

void InsertAtPositionInLinkedList(int value,int AtPosition,Node* &head){
    Node* newNode= new Node(value);
    int position=1;
    Node* temp=head;
    int workdone=0;
    if(AtPosition==1){
        newNode->next=head;
        head=newNode;
        workdone=1;
    }
    else{
    while(temp!=NULL && workdone!=1){
        position++;
        if(position==AtPosition){
            newNode->next=temp->next;
            temp->next=newNode;
            workdone=1;
        }
        temp=temp->next;
    }
    if(workdone==0){
        cout<<"Position entered is not correct!!"<<endl;
    }
    }
    
};

int main()
{
    int position;
    cout<<"Enter the position at which element is to be inserted: ";
    cin>>position;
    
    int element;
    cout<<"Enter the element to be entered: ";
    cin>>element;
    
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(40);
    
    head->next=a;
    a->next=b;
    b->next=tail;
    tail->next=NULL;
    
    InsertAtPositionInLinkedList(element,position,head);
    
    //printing the linked list
    Node* temp=head;
    cout<<"Linked List: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}