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
void levelOrderTraversal(Node* root){
    // base case 
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            // Matlab sara level print ho chuka hai abh agle level pe jane ka time hai 
            // Agar q empty h , then donot insert Null agar q empty nahi hai, then insert Null 
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<front->data<<" ";
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
        }   
    }

}
int main(){
    Node* root=buildTree();
    cout<<endl<<"Priniting Level Order Traversal:"<<endl;
    levelOrderTraversal(root);
    return 0;
}