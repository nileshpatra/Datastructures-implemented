#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* add(struct node* parent){
	struct node *nn;
	nn = (struct node *) malloc(sizeof(struct node));
	if(parent == NULL){
		int val;
		printf("value?\n");
		scanf("%d" , &val);
		nn->data = val;
		nn->left = NULL;
		nn->right = NULL;
		parent = nn;
	}

	int lc , rc;
	printf("left child?\n");
	scanf("%d" , &lc);
	if(lc){
		parent->left = add(parent->left);
	}

	printf("right child?\n");
	scanf("%d" , &rc);
	if(rc){
		parent->right = add(parent->right);
	}
	return parent;
}

void display(struct node* parent){
	if(parent == NULL)
		return;
	printf("%d" , parent->data);
	printf("\n");
	display(parent->left);
	display(parent->right);
}

void main(){
	struct node *parent = NULL;
	parent = add(parent);
	display(parent);

}