//Detect loop in linked list

import java.io.*;

public class GeeksQ8 
{
	public static Node head;
	public static int loopNode;
	
	class Node
	{
		int data;
		Node next;
		
		Node(int data)
		{
			this.data=data;
			this.next=null;
		}
	}
	
	public void insert(int n, int x)throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int val,i;
		Node temp=null;
		val=Integer.parseInt(br.readLine());
		Node new_node=new Node(val);
		head=new_node;
		temp=head;
		if(x==1)
			loopNode=head.data;
		for(i=1;i<n;i++)
		{
			val=Integer.parseInt(br.readLine());
			new_node=new Node(val);
			temp.next=new_node;
			if(x==i+1)
				loopNode=new_node.data;
			else if(x<=0||x>n)
				loopNode=-999;
			temp=temp.next;
		}
		temp=null;
	}
	
	public boolean detectLoop()
	{
		if(loopNode<0)
			return false;
		else
			return true;
	}
	
	public void printList()
	{
		Node temp=head;
		while(temp!=null)
		{
			System.out.print(temp.data+" ");
			temp=temp.next;
		}
		System.out.println();
	}
	
	public static void main(String[] args)throws Exception
	{
		// TODO Auto-generated method stub
		int n,k,x;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		GeeksQ8 g=new GeeksQ8();
		
		System.out.println("Enter length of list:");
		n=Integer.parseInt(br.readLine());
		System.out.println("Enter value of x:");
		x=Integer.parseInt(br.readLine());
		System.out.println("Enter data in list:");
		
		g.insert(n,x);
		
		System.out.println("Original list:");
		g.printList();
		
		if(g.detectLoop()==true)
			System.out.println("True");
		else
			System.out.println("False");

	}
}
