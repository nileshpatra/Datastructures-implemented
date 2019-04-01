from libc.stdlib cimport malloc, free

cdef struct node:
	int data
	node *left
	node *right

cdef node* add(node *parent):

	cdef node *nn
	nn = <node *> malloc(sizeof(node))
	if parent == NULL:
		print('enter value : ')
		val = int(input())
		nn.data = val
		parent = nn
		parent.left = NULL
		parent.right = NULL

	print('left child??')
	hlc = input()

	if(hlc == 'y'):
		parent.left = add(parent.left)

	print('right child??')
	hrc = input()

	if(hrc == 'y'):
		parent.right = add(parent.right)

	return parent

cdef void display(node *parent):
	if parent == NULL:
		return

	print(parent.data)
	display(parent.left)
	display(parent.right)

cdef node *parent=NULL
parent = add(parent)
display(parent)