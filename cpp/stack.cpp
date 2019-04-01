#include <bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node* next;
};
class stk{
	public:
		Node*top = NULL;
		Node*bottom = NULL;
		int size = 0;

		void push(int val){
			Node* nn = new Node();
			nn->val = val;
			if(top != NULL)
				nn->next = top;
			else 
				bottom = nn;
			top = nn;
			size++;
		}

		void display(){
			Node*p = top;
			while(p!=NULL){
				cout<<p->val<<endl;
				p = p->next;
			}
		}

		int pop(){
			Node* rv = top;
			top = top->next;
			rv->next = NULL;
			size--;
			return rv->val;
		}

		int isempy(){
			return top == NULL;
		}

};
int main(int argc, char const *argv[])
{
	stk s ;
	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	cout<<"-------"<<endl;
	cout<<s.pop()<<endl;
	cout<<"-------"<<endl;
	s.display();
	return 0;
}