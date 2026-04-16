
// Sort 0's, 1's, 2's in linked list  

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

void InsertAtTail(Node* &head,Node* &tail,Node* &toInsert){
    if(head==NULL && tail==NULL){
        head=toInsert;
        tail=toInsert;
    }
    else{
        tail->next=toInsert;
        tail=toInsert;
    }
}

Node* sort(Node* &head){
    
    Node* zeroHead=NULL;
    Node* zeroTail=NULL;
    
    Node* oneHead=NULL;
    Node* oneTail=NULL;
    
    Node* twoHead=NULL;
    Node* twoTail=NULL;
    
    Node* temp=head;
    while(temp!=NULL){
        // har node ko isolate krna fer appropriate ll me add kardo 
        Node* toInsert=temp;
        temp=temp->next;
        toInsert->next=NULL;
        
        if(toInsert->data==0){
            InsertAtTail(zeroHead,zeroTail,toInsert);
        }
        
        
        else if(toInsert->data==1){
            InsertAtTail(oneHead,oneTail,toInsert);
        }
        
        else if(toInsert->data==2){
            InsertAtTail(twoHead,twoTail,toInsert);
        }
        
    }
    // Updations Of Linked List 
    Node* newHead=NULL;
    
    if(zeroHead!=NULL){
        newHead=zeroHead;
        if(oneHead!=NULL){
            zeroTail->next=oneHead;
            if(twoHead!=NULL){
                oneTail->next=twoHead;
            }
            else{
                oneTail->next=NULL;
            }
        }
        else{
            zeroTail->next=twoHead;
        }
        
    }
    else{
        zeroHead=NULL;
        newHead=oneHead?oneHead:twoHead;
    }
    
    head=newHead;
    return head;
    
};


void printLinkedList(Node* &head){
    
    Node* temp=head;
    cout<<"Linked List:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
};


int main()
{
    Node* head1=new Node(1);
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(0);
    
    head1->next=a;
    a->next=b;
    b->next=c;
    
    sort(head1);
    printLinkedList(head1);
    
    return 0;
}