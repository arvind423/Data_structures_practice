#include<bits/stdc++.h>
using namespace std;
#include<queue>
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};

Node* buildTree(Node* root){
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for left"<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter data for right"<<endl;
    root->right=buildTree(root->right);
    
}

void buildTreeFromLevelOrder(Node* &root){
    queue<Node*> q;
    int data;
    cout<<"Enter data for root"<<endl;
    cin>>data;
    root=new Node(data);
    q.push(root);
    
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"Enter data for left of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter data for right of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new Node(rightData);
            q.push(temp->right);
        }
        

    }
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        

    }
}

void reverseLevelOrderTraversal(Node* root,vector<int> &ans){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        ans.push_back(temp->data);
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
        q.pop();
        
    }
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}



int main(){
    Node* root=NULL;
    root=buildTree(root);
    cout<<endl<<endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    vector<int> ans;
    reverseLevelOrderTraversal(root,ans);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;
    // buildTreeFromLevelOrder(root);
    // cout<<"Level Order Traversel"<<endl;
    // levelOrderTraversal(root);
    // cout<<endl;
    /*
    cout<<"InOrder Traversel"<<endl;
    inOrderTraversal(root);
    cout<<endl;
    cout<<"preOrder Traversel"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"postOrder Traversel"<<endl;
    postOrderTraversal(root);
    cout<<endl;
    */
}