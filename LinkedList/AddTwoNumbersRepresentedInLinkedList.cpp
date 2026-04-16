// Add two numbers presented in linked list 

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

Node* Add_Two_Linked_Lists(Node* &head1,Node* &head2){
  Node* dummy=new Node(-1);
  Node* temp=dummy;
  int carry=0;
  
  Node* temp2=head1;
  Node* temp3=head2;
  
  while(temp2!=NULL || temp3!=NULL || carry!=0){
      int sum=carry;
      if(temp2!=NULL){
          sum=sum+temp2->data;
          temp2=temp2->next;
      }
      if(temp3!=NULL){
          sum=sum+temp3->data;
          temp3=temp3->next;
      }
      carry=sum/10;
      int digit;
      digit=sum%10;
      
      temp->next=new Node(digit);
      temp=temp->next;
  }
  return dummy->next;
};

void printLinkedList(Node* &head){
    
    Node* temp=head;
    cout<<"Linked List:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}

void addTwoNumbers(Node* &head1,Node* &head2){
    head1=reverse(head1);
    head2=reverse(head2);
    
    Node* result=Add_Two_Linked_Lists(head1,head2);
    result=reverse(result);
    printLinkedList(result);
};




int main()
{
    Node* head1=new Node(3);
    Node* a=new Node(4);
    Node* b=new Node(2);
    Node* c=new Node(0);
    
    head1->next=a;
    a->next=b;
    b->next=c;
    
    
    
    Node* head2=new Node(4);
    Node* d=new Node(6);
    Node* e=new Node(5);
    Node* f=new Node(0);
    
    head2->next=d;
    d->next=e;
    e->next=f;
    
    addTwoNumbers(head1,head2);
     

    return 0;
}