class Node{
	constructor(val,next){
		this.val = val;
		this.next = next;
	}
}

class stk{
	constructor(){
		let top = null;
		let bottom = null;
		let size = 0;
	}

	push(val){
		let nn = new Node(val,null);
		if(this.top != null)
			nn.next = this.top;
		else
			this.bottom = nn;
		this.top = nn;
		this.size++;
	}

	display(){
		let p = this.top;
		while(p!=null){
			console.log(p.val);
			p = p.next;
		}
	}

	pop(){
		let rv = this.top;
		this.top = this.top.next;
		this.size--;
		return rv.val; 
	}

	isempy(){
		return this.head == null;
	}
}

let s = new stk();
s.push(10);
s.push(20);
s.push(30);
s.display();
console.log('-------------------\n');
console.log(s.pop());
console.log('-------------------\n');
s.display();