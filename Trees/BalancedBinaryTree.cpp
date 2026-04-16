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

int getHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    int answer=max(leftHeight,rightHeight)+1;
    return answer;
};

bool canCompleteCircuit(Node* root){
    if(root==NULL){
        return true;
    }
    else{
        int leftHeight=getHeight(root->left);
        int rightHeight=getHeight(root->right);
        int absoluteDifference=abs(leftHeight-rightHeight);
        if(absoluteDifference>1){
            return false;
        }
        else{
            bool leftAnswer=canCompleteCircuit(root->left);
            bool rightAnswer=canCompleteCircuit(root->right);
            if(leftAnswer==true && rightAnswer==true){
                return true;
            }
            else{
                return false;
            }
        }
    }
};

int main(){
    Node* root=buildTree();
    if(canCompleteCircuit(root)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Can not be Balanced"<<endl;
    }
    return 0;
}

