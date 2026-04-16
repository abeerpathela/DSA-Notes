// Tree Boundry Traversal
#include<iostream>
#include<vector>
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
void leftBoundry(Node* root, vector<int>& ans){
    if(root==NULL){
        return;
    }    
    if(root->left==NULL && root->right==NULL){
        return;
    }
    ans.push_back(root->data);
    // jab tak left tak ja sakte hai waha tak jao nahi toh right mei chale jao 
    if(root->left!=NULL){
        leftBoundry(root->left,ans);
    }
    else{
        leftBoundry(root->right,ans);
    }
};
void leafBoundry(Node* root, vector<int>& ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    // recursion for left nodes 
    leafBoundry(root->left,ans);
    leafBoundry(root->right,ans);
};
void rightBoundry(Node* root, vector<int>& ans){
     if(root==NULL){
        return;
    }    
    if(root->left==NULL && root->right==NULL){
        return;
    }
    ans.push_back(root->data);
    // jab tak left tak ja sakte hai waha tak jao nahi toh right mei chale jao 
    if(root->right!=NULL){
        leftBoundry(root->right,ans);
    }
    else{
        leftBoundry(root->left,ans);
    }   
};
vector<int>boundryTraversal(Node* root){
    vector<int>ans;
    
    // root
    if(root==NULL){
        return ans;
    }
    else{
        ans.push_back(root->data);
    }
    // left boundry                     // no root should be included here 
    leftBoundry(root->left,ans);
    // Left leaves 
    leafBoundry(root->left,ans);
    // right leaves
    leafBoundry(root->right,ans);
    // reverse right boundry            // no root should be included here
    rightBoundry(root->right,ans);
    // final Answer
    return ans;
}
int main(){
    /* Example Tree:
             1
           /   \
          2     3
         / \   / \
        4   5 6   7
           / \
          8   9
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);

    vector<int> result = boundryTraversal(root);

    cout << "Boundary Traversal: ";
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
