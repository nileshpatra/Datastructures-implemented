#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int val;
	Node* left;
	Node* right;
};
Node* root = NULL;

Node* add(Node* parent){
	if(parent == NULL){
		Node*nn= new Node();
		cout<<"enter the value:\n";
		int value;
		cin>>value;
		nn->val = value;
		parent = nn;
	}

	string lc;
	cout<<"left child?? :";
	cin>>lc;

	if(lc == "yes")
		parent->left = add(parent->left);
	string rc;
	cout<<"right child?? :";
	cin>>rc;
	if(rc == "yes")
		parent->right = add(parent->right);
	return parent;
}

void display(Node* parent){
	if(parent == NULL)
		return;
	cout<<parent->val<<endl;
	display(parent->left);
	display(parent->right);
}
int main(int argc, char const *argv[])
{
	root = add(root);
	display(root);
	return 0;
}