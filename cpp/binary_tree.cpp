#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int val;
	Node* left;
	Node* right;
};

struct llNode
{
	int val;
	llNode* next;
};
llNode* head = NULL;
llNode* tail = NULL;

class linked_list{
	public:
		void add(int val){
			llNode* nn = new llNode();
			nn->val = val;
			if(head==NULL){
				head = nn;
				tail = nn;
				return;
			}
			tail->next = nn;
			tail = nn;
		}

		void remove_last(){
			if(head == tail){
				head = NULL;
				tail = NULL;
				return;
			}
			llNode* p = head;
			while(p->next!=tail)
				p = p->next;
			p->next=NULL;
			tail=p;
		}

		void display(){
			llNode* p = head;
			while(p!=NULL){
				cout<<p->val<<endl;
				p = p->next;
			}
		}
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

void level_order_ll(queue <Node*> q , linked_list ll){
	if(q.empty())
		return;
	queue <Node*> helper;

	while(!q.empty()){
		Node* curr = q.front();
		ll.add(curr->val);
		if(curr->left!=NULL)
			helper.push(curr->left);
		if(curr->right != NULL)
			helper.push(curr->right);
		q.pop();
	}
	q = helper;
	level_order_ll(q , ll);

}
int main(int argc, char const *argv[])
{
	queue<Node*> q;
	root = add(root);
	display(root);
	q.push(root);
	cout<<endl<<endl;
	linked_list ll;
	level_order_ll(q , ll);
	ll.display();
	return 0;
}