//Delete last occurrence of an item from linked list

import java.io.*;
public class GeeksQ13
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
	
	public void removeSecond(int x)
	{
		Node pretemp,temp,temp1=null;
		temp=head;
		
		while(temp!=null)
		{
			if(temp.data==x)
			{
				temp1=temp;
			}
			temp=temp.next;
		}
		
		temp=head;
		pretemp=head;
		while(temp!=null)
		{
			if(temp.next==temp1)
			{
				pretemp=temp;
			}
			temp=temp.next;
		}
		pretemp.next=temp1.next;
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
		GeeksQ13 g=new GeeksQ13();
		
		System.out.println("Enter length of list:");
		n=Integer.parseInt(br.readLine());
		System.out.println("Enter element whose last occurence removed:");
		element=Integer.parseInt(br.readLine());
		System.out.println("Enter data in list:");
		
		g.insert(n);
		
		System.out.println("Original list:");
		g.printList();
		
		System.out.println("New list:");
		g.removeSecond(element);
		g.printList();

	}

}
