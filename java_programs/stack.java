public class stack{
	public static class Node{
		int val;
		Node next;
	}

	public static class stk{
		
		Node top = null;
		Node bottom = null;
		int size = 0;
		
		public void push(int val){
			Node nn = new Node();
			nn.val = val;
			nn.next = null;
			if(this.top != null)
				nn.next = top;
			else
				this.bottom = nn;
			this.top = nn;
		}
		public int pop(){
			Node rv = this.top;
			this.top = this.top.next;
			rv.next = null;
			return rv.val;
		}
		public void display(){
			Node p = this.top;
			while(p!=null){
				System.out.println(p.val);
				p = p.next;
			}
		}
	}

	public static void main(String[] args) {
		stk s = new stk();	
		s.push(10);
		s.push(20);
		s.push(30);
		s.display();
		System.out.println("-----------------");
		System.out.println(s.pop());
		System.out.println("-----------------");
		s.display();
	}
}