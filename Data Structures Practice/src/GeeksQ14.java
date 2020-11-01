//Rotate a linked list.

import java.io.*;
public class GeeksQ14
{
	public static Node head;
	
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
	
	public void insert(int n)throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int val,i;
		Node temp=null;
		val=Integer.parseInt(br.readLine());
		Node new_node=new Node(val);
		head=new_node;
		temp=head;
		for(i=1;i<n;i++)
		{
			val=Integer.parseInt(br.readLine());
			new_node=new Node(val);
			temp.next=new_node;
			temp=temp.next;
		}
		temp=null;
	}
	
	public void rotate(int k)
	{
		Node temp,new_head,temp1;
		int cnt=0;
		
		new_head=temp1=null;
		temp=head;
		while(temp!=null && cnt<k-1)
		{
			cnt++;
			temp=temp.next;
		}
		
		new_head=temp.next;
		temp.next=null;
		
		temp=new_head;
		while(temp.next!=null)
		{
			temp=temp.next;
		}
		temp.next=head;
		head=new_head;
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
		int n,k,element;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		GeeksQ14 g=new GeeksQ14();
		
		System.out.println("Enter length of list:");
		n=Integer.parseInt(br.readLine());
		do
		{
			System.out.println("Enter value of k:");
			k=Integer.parseInt(br.readLine());
		}while(k>=n);
		
		System.out.println("Enter data in list:");
		
		g.insert(n);
		
		System.out.println("Original list:");
		g.printList();
		
		System.out.println("New list:");
		g.rotate(k);
		g.printList();

	}

}
