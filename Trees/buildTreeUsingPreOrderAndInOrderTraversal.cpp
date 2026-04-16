// Build trees using preOrder and inOrder 
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

int getIndex(int element,vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
};

Node* buildTree(vector<int>& preOrder,vector<int>& inOrder, int &preOrderIndex, int inOrderStart, int inOrderEnd){
    if(preOrderIndex>=preOrder.size()){
        return NULL;
    }   
    if(inOrderStart>inOrderEnd){
        return NULL;
    }
    int element=preOrder[preOrderIndex];
    preOrderIndex++;
    
    Node* root=new Node(element);
    int elementIndexInsideInorder=getIndex(element,inOrder);
    
    root->left=buildTree(preOrder,inOrder,preOrderIndex,inOrderStart,elementIndexInsideInorder-1);
    root->right=buildTree(preOrder,inOrder,preOrderIndex,elementIndexInsideInorder+1,inOrderEnd);
    return root;
};

Node* buildTree(vector<int>& preOrder,vector<int>& inOrder){
    int preOrderIndex=0;
    int inOrderStart=0;
    int inOrderEnd=inOrder.size()-1;
    Node* root=buildTree(preOrder,inOrder,preOrderIndex,inOrderStart,inOrderEnd);
    return root;
};

int main(){
    vector<int> preOrder = {1, 2, 4, 5, 3, 6, 7};
    vector<int> inOrder  = {4, 2, 5, 1, 6, 3, 7};

    Node* root = buildTree(preOrder, inOrder);

    cout << "Tree built successfully using Preorder and Inorder traversal." << endl;

    return 0;
}