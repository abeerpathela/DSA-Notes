// Path Sum 2 
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

void solve(Node* root,int targetSum, int sum, vector<int>temp, vector<vector<int>> &ans){
    if(root==NULL){
        return;
    }
    // Current node operation 
    sum=sum+root->data;
    temp.push_back(root->data);
    // leaf Node 
    if(root->left==NULL && root->right==NULL){
        if(sum==targetSum){
            ans.push_back(temp);
            return;
        }
    }
    // Left subtree 
    solve(root->left,targetSum,sum,temp,ans);
    // right subtree
    solve(root->right,targetSum,sum,temp,ans);
    
}

vector<vector<int>> pathSum(Node* root,int targetSum){
    int sum=0;
    vector<int>temp;
    vector<vector<int>>ans;
    solve(root,targetSum,sum,temp,ans);
    return ans;
};

int main(){
    cout<<"Build the tree (-1 for NULL):\n";
    Node* root = buildTree();

    int targetSum;
    cout<<"\nEnter TargetSum: ";
    cin>>targetSum;

    vector<vector<int>> result = pathSum(root, targetSum);

    cout<<"\nAll paths with sum = "<<targetSum<<":\n";
    if(result.empty()){
        cout<<"No path found.\n";
    } else {
        for(auto path : result){
            for(auto val : path){
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
