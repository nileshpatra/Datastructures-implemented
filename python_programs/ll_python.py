class Node:
	def __init__(self,val,next):
		self.val = val
		self.next = next
class ll:
	def __init__(self):
		self.head = None
		self.tail = None

	def add(self,val):
		nn = Node(val , None)
		if self.head == None:
			self.head = nn
			self.tail = nn
			return
		self.tail.next = nn
		self.tail = nn

	def remove_last(self):
		if self.head == self.tail:
			self.head = None
			self.tail = None
			return
			
		p = self.head
		while p.next != self.tail:
			p = p.next
		p.next = None
		self.tail = p

	def display(self):
		p = self.head
		while p!=None:
			print(p.val)
			p = p.next
		return self.head.val
# ll_list = ll()
# ll_list.add(10)
# ll_list.add(20)
# ll_list.add(30)
# ll_list.add(40)
# ll_list.display()
# print('-----------------')
# ll_list.remove_last()
# ll_list.display()
