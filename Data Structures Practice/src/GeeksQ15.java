//Delete N nodes after M nodes of a linked list

import java.io.*;
public class GeeksQ15
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
	
	public void deleteN(Node head,int m,int n)
	{
		Node curr,temp;
		int i;
		curr=head;
		temp=head;
		
		while(curr!=null)
		{
			for(i=1;i<m && curr!=null;i++)
				curr=curr.next;
			
			if(curr==null)
				break;
			
			temp=curr.next;
			for(i=1;i<=n && temp!=null;i++)
				temp=temp.next;
			
			curr.next=temp;
			
			curr=temp;
		}
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
		int N,m,n,k;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		GeeksQ15 g=new GeeksQ15();
		
		System.out.println("Enter length of list:");
		N=Integer.parseInt(br.readLine());
		
		System.out.println("Enter m:");
		m=Integer.parseInt(br.readLine());
		
		System.out.println("Enter n:");
		n=Integer.parseInt(br.readLine());
		
		System.out.println("Enter data in list:");
		g.insert(N);
		
		System.out.println("Original list:");
		g.printList();
		
		System.out.println("New list:");
		g.deleteN(head,m,n);
		g.printList();
	}

}
