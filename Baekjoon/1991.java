import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Node {
	char val;
	int rightChildIndex;
	int leftChildIndex;
	
	public Node(char c, int r, int l) {
		this.val = c;
		this.rightChildIndex = r;
		this.leftChildIndex = l;
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		Node[] ls = new Node[n];
		
		for(int i = 0; i < n; i++) {
			char v = sc.next().charAt(0);
			int left = sc.next().charAt(0) - 65;
			int right = sc.next().charAt(0) - 65;
			
			ls[v - 65] = new Node(v, right, left);
		}
		
		preorder(ls, 0);
		System.out.println();
		inorder(ls, 0);
		System.out.println();
		postorder(ls, 0);
		System.out.println();
		
		sc.close();
	}
	
	static public void preorder(Node[] ls, int index) {
		System.out.print(ls[index].val);
		if(ls[index].leftChildIndex != -19)
			preorder(ls, ls[index].leftChildIndex);
		if(ls[index].rightChildIndex != -19)
			preorder(ls, ls[index].rightChildIndex);
	}
	
	static public void inorder(Node[] ls, int index) {
		if(ls[index].leftChildIndex != -19)
			inorder(ls, ls[index].leftChildIndex);
		System.out.print(ls[index].val);
		if(ls[index].rightChildIndex != -19)
			inorder(ls, ls[index].rightChildIndex);
	}
	
	static public void postorder(Node[] ls, int index) {
		if(ls[index].leftChildIndex != -19)
			postorder(ls, ls[index].leftChildIndex);
		if(ls[index].rightChildIndex != -19)
			postorder(ls, ls[index].rightChildIndex);
		System.out.print(ls[index].val);
	}
}