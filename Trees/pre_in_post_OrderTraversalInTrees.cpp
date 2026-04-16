// preOrderTraversal, inOrderTraversal , postOrderTraversal in Trees 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(){
    int val;
    cout<<"Enter the Value:";
    cin>>val;
    if(val==-1){
        return NULL;
    }
    else{
        Node* root=new Node(val);
        root->left=buildTree();
        root->right=buildTree();
        return root;
    }
};
// preOrderTraversal matlab NLR 
void preOrderTraversal(Node* root){
    // base Case  -> agar NULL hai toh wapis bhag jao 
    if(root==NULL){
        return ;
    }
    // N ko mai print karunga L,R ko mai recurrsion ko handover kar dunga 
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    
};
// inOrderTraversal matlab LNR
void inOrderTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
};
// postOrderTraversal matlab LRN 
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=buildTree();
    cout<<endl<<"printing preOrderTraversal:"<<endl;
    preOrderTraversal(root);
    cout<<endl<<"printing inOrderTraversal:"<<endl;
    inOrderTraversal(root);
    cout<<endl<<"printing postOrderTraversal:"<<endl;
    postOrderTraversal(root);
    return 0;
}