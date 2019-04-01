var readline = require('readline-sync')
class Node{
	constructor(val,child){
		this.val=val
		this.child=child
	}
}

class generic_tree{
	constructor(){
		this.root=null
		this.root=this.add(this.root)
	}
	add(parent){
		let n = new Node(null,[])
		if(parent==null || parent==undefined){
			console.log('enter value\n')
			let value=readline.question()
			n.val=value
			parent=n
		}
		console.log('how many children??')
		let num = readline.question()

		for(let i=0;i<num;i++)
			parent.child.push(this.add(parent.child[i]))
		return parent
	}

	get_root(){
		return this.root
	}

	display(node){
		if(node==null || node==undefined)
			return
		console.log(node.val)
		for(let i=0;i<node.child.length;i++)
			this.display(node.child[i])
	}
}

tree = new generic_tree()
tree.display(tree.get_root())