// Least common ancestor of two Nodes 
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(){
    int val;
    cout<<"Enter Value: ";
    cin>>val;
    if(val==-1){
        return NULL;
    }
    Node* root=new Node(val);
    root->left=buildTree();
    root->right=buildTree();
    return root;
};

Node* findNode(Node* root,int value){
    if(root==NULL){
        return NULL;
    }
    else{
        if(root->data==value){
            return root;
        }
        Node* left=findNode(root->left,value);
        if(left){
            return left;
        }
        else{
            return findNode(root->right,value);
        }
    }
    
}

Node* leastCommonAncestor(Node* root,Node* p,Node* q){
    if(root==NULL){
        return NULL;
    }
    else if(root==p){
        return p;
    }
    else if(root==q){
        return q;
    }
    
    Node* leftAnswer=leastCommonAncestor(root->left,p,q);
    Node* rightAnswer=leastCommonAncestor(root->right,p,q);
    
    if(leftAnswer==NULL && rightAnswer==NULL){
        return NULL;
    }
    else if(leftAnswer!=NULL && rightAnswer==NULL){
        return leftAnswer;
    }
    else if(leftAnswer==NULL && rightAnswer!=NULL){
        return rightAnswer;
    }
    else{           // leftAnswer!=NULL && rightAnswer!=NULL
        return root;
    }
};

int main(){
    Node* root=buildTree();
    int pVal;
    cout<<"Enter the Value of p: ";
    cin>>pVal;
    int qVal;
    cout<<"Enter the Value of q: ";
    cin>>qVal;
    Node* p=findNode(root,pVal);
    Node* q=findNode(root,qVal);
    Node* result=leastCommonAncestor(root,p,q);
    cout<<endl<<result->data<<endl;
    return 0;
}
