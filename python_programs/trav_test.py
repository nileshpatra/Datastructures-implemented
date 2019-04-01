import unittest
from ll_python import ll

class calc(unittest.TestCase):

	def test_methods(self):
		self.list = ll()
		self.list.add(10)
		self.assertEqual(self.list.display() , 10)

if __name__ == '__main__':
	unittest.main()
