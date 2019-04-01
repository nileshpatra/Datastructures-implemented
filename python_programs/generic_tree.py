class Node:
		def __init__(self,val,arr):
			self.val = val
			self.arr = arr
class generic_tree:
	def __init__(self):
		self.root = None
		self.root = self.add(self.root)

	def get_root(self):
		return self.root

	def add(self,parent):
		if(parent == None):
			print('enter value?:')
			val = int(input())
			nn = Node(val,[])
			parent = nn
		print('no of children??')
		n = int(input())
		for i in range(n):
			parent.arr.append(None)
			parent.arr[i] = self.add(parent.arr[i])
		return parent

	def display(self,parent):
		if parent == None:
			return
		print(parent.val)
		for i in range(len(parent.arr)):
			self.display(parent.arr[i])

tree = generic_tree()
tree.display(tree.get_root())
