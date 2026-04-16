
// Detect Starting Node of cycle 
// or
// Return the node where the cycle is starting 

#include<iostream>
#include<map>
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

Node* DetectStart(Node* &head){
    Node* StartOfCycle=NULL;
    map<Node*,bool>Visited;
    Node* temp=head;
    while(temp!=NULL){
        if(Visited[temp]==true){
            StartOfCycle=temp;
            break;
        }
        else{
            Visited[temp]=true;
        }
        temp=temp->next;
    }
    return StartOfCycle;
};

int main(){
    Node* head1=new Node(1);
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(0);
    
    head1->next=a;
    a->next=b;
    b->next=c;
    c->next=b;
    
    Node* cycleStart=DetectStart(head1);
    
    if(cycleStart==NULL){
        cout<<"There is no cycle";
    }
    else{
        cout<<"There is a cycle."<<endl<<cycleStart->data;
    }
    
    return 0;
}
