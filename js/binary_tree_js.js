var readline = require('readline-sync')
class Node{
	constructor(val,left,right){
		this.val=val
		this.left=left
		this.right=right
	}
}
class tree{
	constructor(){
		this.root=null
		this.root = this.add(this.root)
	}
	add(parent){
		let n = new Node(null,null,null)
		if(parent==null){
			console.log('enter value:\n')
			n.val=readline.question()
			parent=n
		}
		console.log('left-child??')
		let lc = readline.question()
		if(lc=='true'){
			let retnodel = this.add(parent.left)
			parent.left = retnodel
		}
		console.log('right-child??')
		let rc = readline.question()
		if(rc=='true'){
			let retnoder = this.add(parent.right)
			parent.right = retnoder
		}
		return parent
	}
	get_root(){
		return this.root
	}
	display(node){
		if(node==null)
			return
		console.log(node.val)
		this.display(node.left)
		this.display(node.right)
	}
}

t = new tree()
t.display(t.get_root())