#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int val;
	Node* next;
};
Node* head = NULL;
Node* tail = NULL;

class linked_list{
	public:
		void add(int val){
			Node* nn = new Node();
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
			Node* p = head;
			while(p->next!=tail)
				p = p->next;
			p->next=NULL;
			tail=p;
		}

		void display(){
			Node* p = head;
			while(p!=NULL){
				cout<<p->val<<endl;
				p = p->next;
			}
		}
};
int main(int argc, char const *argv[])
{
	linked_list ll ;
	ll.add(10);
	ll.add(20);
	ll.add(30);
	ll.add(40);
	ll.display();
	cout<<"------------"<<endl;
	ll.remove_last();
	ll.display();
	return 0;
}