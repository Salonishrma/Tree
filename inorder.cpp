#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
Node* newNode(int data){
    Node* temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(struct Node*node){
    if(node==NULL)
      return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);

    
}
int main(){
    struct Node* root=newNode(10);
    root->left=newNode(20);
    root->right=newNode(30);
    root->left->left=newNode(40);
    root->left->right=newNode(50);
    cout<<"inoreder of the tree ";
    inorder(root);
    return 0;
}
