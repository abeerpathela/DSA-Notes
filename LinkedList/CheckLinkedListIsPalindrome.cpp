// Check Linked List is Palindrome or not
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

Node* MidNode(Node* &head){
    Node* fast=head;
    Node* slow=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
};

void CheckPalindrome(Node* &head){
    int IsPalindrome=0;
    Node* MiddleNode=MidNode(head);
    // reverse from MidNode
    Node* current=MiddleNode;
    Node* previous=NULL;
    Node* forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
    }
    Node* tail=previous;
    //check Palindrome
    Node* temp2=head;
    while(tail!=NULL){
        if(tail->data!=temp2->data){
            IsPalindrome=1;
            break;
        }
        tail=tail->next;
        temp2=temp2->next;
    }
    if(IsPalindrome==1){
        cout<<"NO";
    }
    else{
        cout<<"yes";
    }
};

int main(){
    Node* head=new Node(1);
    Node* a=new Node(2);
    
    head->next=a;
    CheckPalindrome(head);
    return 0;
}