// Build trees using inOrder and postOrder  
#include <iostream>
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
int getIndex(int element,vector<int> inOrder){
    for(int i=0; i<inOrder.size(); i++){
        if(inOrder[i]==element){
            return i;
        }
    }
    return -1;
};
Node* buildTree(vector<int>& inOrder, vector<int>& postOrder,int &postOrderIndex,int inOrderStart,int inOrderEnd){
   if(postOrderIndex<0 || inOrderStart>inOrderEnd){
       return NULL;
   } 
   
   int element=postOrder[postOrderIndex];
   postOrderIndex--;
   Node* root=new Node(element);
   int elementIndexInsideInOrder=getIndex(element,inOrder);
   
   root->right=buildTree(inOrder,postOrder,postOrderIndex,elementIndexInsideInOrder+1,inOrderEnd);
    root->left=buildTree(inOrder,postOrder,postOrderIndex,inOrderStart,elementIndexInsideInOrder-1);
    return root;
};
Node* buildTree(vector<int>& inOrder, vector<int>& postOrder){
      int postOrderIndex=postOrder.size()-1;
      int inOrderStart=0;
      int inOrderEnd=inOrder.size()-1;
      Node* root=buildTree(inOrder,postOrder,postOrderIndex,inOrderStart,inOrderEnd);
      return root;
      
};
void printPreOrder(Node* root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
};

int main(){
    vector<int> inOrder = {4, 2, 5, 1, 6, 3, 7};
    vector<int> postOrder = {4, 5, 2, 6, 7, 3, 1};

    Node* root = buildTree(inOrder, postOrder);

    cout << "Preorder traversal of constructed tree: ";
    printPreOrder(root);
    cout << endl;

    return 0;
}