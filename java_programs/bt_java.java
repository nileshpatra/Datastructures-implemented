import java.util.*;
public class bt_java{

	public static class Node{
		int val;
		Node left;
		Node right;
	}

	public static class Binary_Tree{
		Node root = new Node();

		public Binary_Tree(){
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

			System.out.println("left child??");
			boolean lc = scn.nextBoolean();
			if(lc)
				parent.left = this.add(parent.left,scn);

			System.out.println("right child??");
			boolean rc = scn.nextBoolean();
			if(rc)
				parent.right = this.add(parent.right,scn);

			return parent;
		}

		public void display(){
			display(this.root);
		}

		public void display(Node nn){
			if(nn == null)
				return;
			System.out.println(nn.val);
			this.display(nn.left);
			this.display(nn.right);
		}

	}

	public static void main(String[] args) {
		Binary_Tree tree = new Binary_Tree();
		tree.display();
	}
}