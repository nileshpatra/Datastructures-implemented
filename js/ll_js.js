class Node{
		constructor(val,next_node){
			this.val=val
			this.next=next_node
		}
	}

class linked_list{
	constructor(){
		this.head = null
		this.tail = null
		this.size = 0
	}
	add(val){
		let node = new Node(val,null)
		this.size++
		if(this.head == null){
			this.head=node
			this.tail=node
			return
		}
		let p = this.head
		while(p.next!=null)
			p = p.next
		p.next = node
		this.tail=node
	}
	remove_last(){
		if(this.size==0)
			return
		this.size--
		let p = this.head
		while(p.next!=this.tail){
			if(p.next==null){
				this.head=null
				this.tail=null
				return
		}	
			p= p.next
	  }
	  p.next=null
	  this.tail=p
   }
	display(){
		let node = this.head
		while(node!=null){
			console.log(node.val)
			node=node.next
		}
	}
}
var readline = require('readline-sync')
let ll = new linked_list()
let a = readline.question()
for(let i=0;i<a;i++)
	ll.add(readline.question())
console.log('--------------------')
ll.display()
console.log(ll.size)
console.log('--------------------')
ll.remove_last()
ll.display()
console.log(ll.size)
console.log('--------------------')
ll.remove_last()
ll.display()
console.log(ll.size)