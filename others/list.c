#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void add(int val){
	struct node *nn;
	nn = (struct node *) malloc(sizeof(struct node));
	nn->data = val;
	nn->next = NULL;

	if(head == NULL){
		head = nn;
		tail = nn;
		return;
	}
	// printf("%d%d\n" , head->data , tail->data);
	tail->next=nn;
	tail=nn;
	// printf("%d%d\n" , head->data , tail->data);
}

void display(){
	struct node *p = head;
	while(p!=NULL){
		printf("%d", p->data);
		printf("\n");
		p = p->next;
	}
}
void main(){
add(10);
// display();
add(20);
display();

}