public class ll_java{
	public static class Node{
		int val;
		Node next;
	}
	public static class linked_list{
		Node head = new Node();
		Node tail = new Node();

		public linked_list(){
			this.head = null;
			this.tail = null;
		}

		public void add(int val){
			Node nn = new Node();
			nn.val = val;
			nn.next = null;
			if(this.head == null){
				this.head = nn;
				this.tail = nn;
				return;
			}

			this.tail.next = nn;
			this.tail = nn;
		}

		public void display(){
			Node p = this.head;
			while(p!=null){
				System.out.println(p.val);
				p = p.next;
			}
		}

		public void remove_last(){
			Node p = this.head;
			if(this.head == this.tail){
				this.head = null;
				this.tail = null;
				return;
			}
			while(p.next!=this.tail)
				p = p.next;
			p.next = null;
			this.tail = p;
		}

	}
	public static void main(String[] args) {
		linked_list ll = new linked_list();
		ll.add(10);
		ll.add(20);
		ll.add(30);
		ll.add(40);
		ll.display();
		ll.remove_last();
		System.out.println("--------------");
		ll.display();
	}
}