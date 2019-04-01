from libc.stdlib cimport malloc, free

cdef struct node:
	node* next
	int data

cdef node *head = NULL
cdef node *tail = NULL

cdef void add(int val):
	global head , tail

	cdef node *nn
	nn = <node *> malloc(sizeof(node))
	nn.next = NULL
	nn.data = val

	if head == NULL:
		head = nn
		tail = nn
		return 

	tail.next=nn
	tail=nn
	return

cdef void display():
	global head
	cdef node *p = head
	while p!= NULL:
		print(p.data)
		p = p.next

cdef void remove_last():
	cdef node *p = head
	while p.next.next != NULL:
		p = p.next
	
	p.next = NULL
	tail = p

add(int(input()))
add(int(input()))
add(int(input()))
print('--------------------')
display()
remove_last()
print('--------------------')
display()
