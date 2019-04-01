from distutils.core import setup
from Cython.Build import cythonize

setup(
	ext_modules = cythonize(['ll.pyx' , 'cython_tree.pyx'])
)