import java.util.*;
public class gt_java{

	public static class Node{
		int val;
		ArrayList<Node> al = new ArrayList<>();
	}

	public static class Generic_Tree{
		Node root = new Node();

		public Generic_Tree(){
			this.root = null;
			this.root = this.add(this.root , new Scanner(System.in));
		}

		public Node add(Node parent , Scanner scn){
			if(parent == null){
				System.out.println("enter value??:");
				Node nn = new Node();
				nn.val = scn.nextInt();
				parent = nn;
			}

			System.out.println("number of children??");
			int n = scn.nextInt();
			for(int i=0 ; i<n;i++){
				parent.al.add(null);
				parent.al.set(i , this.add(parent.al.get(i) , scn));
			}
			return parent;
		}

		public void display(){
			display(this.root);
		}

		public void display(Node nn){
			if(nn == null)
				return;
			System.out.println(nn.val);
			for(int i = 0 ; i<nn.al.size() ; i++)
				this.display(nn.al.get(i));
		}

	}

	public static void main(String[] args) {
		Generic_Tree tree = new Generic_Tree();
		tree.display();
	}
}