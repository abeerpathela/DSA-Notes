// delete from position

#include<iostream>
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

void DeleteAtPosition(int position, Node* &head){
    int currentPosition=1;
    Node* current=head;
    Node* previous=NULL;
    Node* next=NULL;
    
    if(position==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    else{
       while(current!=NULL && currentPosition<position){
           previous=current;
           current=current->next;
           currentPosition++;
       } 
       if(current==NULL){
           cout<<endl<<"Enter a valid position";
       }
       else{
           previous->next=current->next;
           current->next=NULL;
           delete current;
       }
    }
}

int main(){
    
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(40);
    
    head->next=a;
    a->next=b;
    b->next=tail;
    tail->next=NULL;
    
    int position;
    cout<<"Enter the position at which element is to be deleted: ";
    cin>>position;
    
    DeleteAtPosition(position,head);
    
    //Printing Linked List
    Node* temp=head;
    cout<<"Linked List: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}