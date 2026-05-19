#include<iostream>
#include<limits.h>
#include<string>
#include<vector>
#include<queue>
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

Node* buildBST(Node* root,int value){
    if(root==NULL){
        root=new Node(value);
        return root;
    }
    else{
        if(value > root->data){
            root->right=buildBST(root->right,value);
        }
        else{
            root->left=buildBST(root->left,value);
        }
        return root;
    }
}

Node* createBST(Node* root){
    cout<<"Enter the value for the node"<<endl;
    int val;
    cin>>val;
    // tab tak chalo jab tak user -1 na enter karde 
    while(val!=-1){
        root=buildBST(root, val);
        cout<<"Enter the value for the node:"<<endl;
        cin>>val;
    }
    return root;
}

void preorder(Node* root){
    // NLR 
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// other 2 same order as tree which are 
// postorder LRN  and inorder NLR

void levelorderTraversal(Node* root){
    queue<Node*>q;

    // initial State
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);   
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}

int getMin(Node* root){
    if(root == NULL){
        return -1;
    }
    // hume ek aise node dhundhne hai jiske left mei kuch nahi hai 
    // so hum sirf left me traverse karenge 
    while(root->left !=NULL){
        root=root->left;
    }
    return root->data;
}

int getMax(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}

bool searchBST(Node* root, int target){
    // search karna hai ke element tree mei exist karta hai ya nahi
    if(root==NULL){
        return false;
    }
    if(root->data==target){
        return true;
    }
    else{
        if(target > root->data){
            // right me jao 
            bool rightAns=searchBST(root->right,target);
            if(rightAns){
                return true;
            }
        }
        if(target < root->data){
            // left mei jao 
            bool leftAns=searchBST(root->left,target);
            if(leftAns){
                return true;
            }
        }
    }
    // return false;
}

int main(){
    Node* root=NULL;
    root=createBST(root);

    cout<<endl;
    cout<<"Printing Pre Order"<<endl;
    preorder(root);

    cout<<endl;
    cout<<"Printing Level Order"<<endl;
    levelorderTraversal(root);

    cout<<"Minimum is "<<getMin(root);
    cout<<endl<<"Maximum is "<<getMax(root)<<endl;

    if(searchBST(root,60)){
        cout<<"Found element 60";
    }
    else{
        cout<<"Didnt found element 60";
    }

}