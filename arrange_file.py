import os
import shutil
path = os.getcwd()
print(path)
# try:
# 	for file in os.listdir(path):
# 		file=str(file)
# 		if file.endswith('.cpp'):
# 			os.rename(os.path.join(path , file) , os.path.join(path+'/cpp',file))
# 		elif file.endswith('.java'):
# 			os.rename(os.path.join(path,file) , os.path.join(path+'/java_programs',file))
# 		if file.endswith('.py'):
# 			os.rename(os.path.join(path,file) , os.path.join(path+'/python_programs',file))
# 		else:
# 			os.rename(os.path.join(path,file) , os.path.join(path+'/others',file))
	
# except:
# 	pass

for file in os.listdir(path):
	file=str(file)
	if file.startswith('arrange_file') or file.startswith('cpp') or file.startswith('java_programs') or file.startswith('python_programs') or file.startswith('others')\
	or file.startswith('js') or file.startswith('cython_programs'):
		continue
	if file.endswith('.cpp'):
		os.rename(os.path.join(path , file) , os.path.join(path+'/cpp',file))
	elif file.endswith('.java'):
		os.rename(os.path.join(path,file) , os.path.join(path+'/java_programs',file))
	elif file.endswith('.py'):
		os.rename(os.path.join(path,file) , os.path.join(path+'/python_programs',file))
	elif file.endswith('.js'):
		os.rename(os.path.join(path,file) , os.path.join(path+'/js',file))
	elif file.endswith('.pyx'):
		os.rename(os.path.join(path,file) , os.path.join(path+'/cython_programs',file))
	else:
		os.rename(os.path.join(path,file) , os.path.join(path+'/others',file))
	

