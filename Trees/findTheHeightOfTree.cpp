// Max depth of tree 
#include<iostream>
#include<string>
#include<queue>
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
int maxDepth(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=maxDepth(root->left)+1;
    int rightHeight=maxDepth(root->right)+1;
    int answer=max(leftHeight,rightHeight);
    return answer;
}
int main(){
    Node* root=buildTree();
    cout<<endl<<maxDepth(root)<<endl;
    return 0;
}