//node with degree 1 or 2
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left, *right;
};
int count(struct Node *p){
    int x,y;
    if(p!=NULL){
        x=count(p->left);
        y=count(p->right);
       if(p->left!=NULL || p->right!=NULL)
           return x+y+1;
       return x+y;
    }
    return 0;
}
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int main()
{

	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	cout << "nodes with degree 1 and 2  ";
	cout<<count(root);
	return 0;
}
