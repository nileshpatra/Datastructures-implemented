class Node:
		def __init__(self,val,left,right):
			self.val = val
			self.left = left
			self.right = right
class binary_tree:
	def __init__(self):
		self.root = None
		self.root = self.add(self.root)

	def get_root(self):
		return self.root

	def add(self,parent):
		if(parent == None):
			print('enter value?:')
			val = int(input())
			nn = Node(val , None , None)
			parent = nn
		print('left child??')
		lc = input()
		if lc == 'yes':
			parent.left = self.add(parent.left)
		print('right child?')
		rc = input()
		if rc == 'yes':
			parent.right = self.add(parent.right)
		return parent

	def display(self,parent):
		if parent == None:
			return
		print(parent.val)
		self.display(parent.left)
		self.display(parent.right)

tree = binary_tree()
tree.display(tree.get_root())
