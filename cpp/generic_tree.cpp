#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int val;
	vector<Node*> v;
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

	int n;
	cout<<"how many children??\n";
	cin>>n;
	for(int i=0;i<n;i++){
		parent->v.push_back(NULL);
		parent->v[i] = add(parent->v[i]);
	}

	return parent;
	
}

void display(Node* parent){
	if(parent == NULL)
		return;
	cout<<parent->val<<endl;
	for(int i=0;i<parent->v.size();i++)
		display(parent->v[i]);
}
int main(int argc, char const *argv[])
{
	root = add(root);
	display(root);
	return 0;
}