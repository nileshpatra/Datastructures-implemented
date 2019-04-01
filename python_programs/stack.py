class Node:
	def __init__(self , val , next):
		self.val = val
		self.next = next

class stack:
	def __init__(self):
		self.head = Node(None , None)
		self.bottom = Node(None , None)
		self.size = 0

	def push(self,val):
		nn = Node(val , None)
		if self.head.val != None:
			nn.next = self.head
		else:
			self.bottom = nn
		self.head = nn
		self.size+=1

	def pop(self):
		rv = self.head
		self.head = self.head.next
		rv.next = None
		self.size -= 1
		return rv.val

	def display(self):
		p = self.head
		while p!= None:
			print(p.val)
			p = p.next

s = stack()
s.push(10)
s.push(20)
s.push(30)
s.display()
print('--------------')
print(s.pop())
print('--------------')
s.display()