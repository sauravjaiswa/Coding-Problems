//Merge a linked list into another linked list at alternate positions.

import java.io.*;
public class GeeksQ16
{
	public Node head;
	
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
	
	public void twoList(GeeksQ16 list)
	{
		Node temp1,temp2,temp1_next,temp2_next;
		temp1=head;
		temp2=list.head;
		
		while(temp1!=null && temp2!=null)
		{
			temp1_next=temp1.next;
			temp2_next=temp2.next;
			
			temp2.next=temp1_next;
			temp1.next=temp2;
			
			temp1=temp1_next;
			temp2=temp2_next;
		}
		list.head=temp2;
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
		int N,M;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		GeeksQ16 list1=new GeeksQ16();
		GeeksQ16 list2=new GeeksQ16();
		
		System.out.println("Enter length of two list:");
		M=Integer.parseInt(br.readLine());
		N=Integer.parseInt(br.readLine());
		
		System.out.println("Enter data in first list:");
		list1.insert(M);
		System.out.println("Enter data in second list:");
		list2.insert(N);
		
		System.out.println("Original first list:");
		list1.printList();
		System.out.println("Original second list:");
		list2.printList();
		
		list1.twoList(list2);
		
		System.out.println("Modified first list:");
		list1.printList();
		System.out.println("Modified second list:");
		list2.printList();
	}

}
