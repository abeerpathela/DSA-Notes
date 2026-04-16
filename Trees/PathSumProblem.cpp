// Path Sum Problem 
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

bool solve(Node* root,int targetSum,int sum){
    if(root==NULL){
        return false;
    }
    sum=sum+root->data;
    if(root->left==NULL && root->right==NULL){  // it check that it is the last node 
        if(sum==targetSum){
            return true;
        }
        else{
            return false;
        }
    }   
    bool leftAnswer=solve(root->left,targetSum,sum);
    bool rightAnswer=solve(root->right,targetSum,sum);
    return leftAnswer || rightAnswer;
};

bool hasPathSum(Node* root,int totalSum){
    int sum=0;
    bool answer=solve(root,totalSum,sum);
    return answer;
};


int main(){
    Node* root=buildTree();
    int targetSum;
    cout<<"Enter TargetSum: ";
    cin>>targetSum;
    if(hasPathSum(root,targetSum)){
        cout<<endl<<"It has a Path sum"<<endl;
    }
    else{
        cout<<endl<<"It does not have a path sum"<<endl;
    }
    return 0;
}