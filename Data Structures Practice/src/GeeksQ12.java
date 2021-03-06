//Reverse a linked list in groups of given size alternatively

import java.io.*;
public class GeeksQ12 
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
	
	public Node reverse(Node head,int k,boolean flag)
	{
		if (head == null) 
            return null; 
		Node prev,curr,next;
		prev=null;
		curr=head;
		next=null;
		int count=1;
		
        while (count<=k && curr!=null) 
        { 
            next=curr.next; 
            if(flag==true)
            	curr.next=prev; 
            prev=curr; 
            curr=next; 
            count++;
        }
        if(flag==true)
        {
        	head.next=reverse(curr,k,!flag);
        	return prev;
        }
        else
        {
        	prev.next=reverse(curr,k,!flag);
            return next;
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
		int n,k;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		GeeksQ12 g=new GeeksQ12();
		
		System.out.println("Enter length of list:");
		n=Integer.parseInt(br.readLine());
		System.out.println("Enter data in list:");
		
		g.insert(n);
		System.out.println("Enter length of subsequence:");
		k=Integer.parseInt(br.readLine());
		
		System.out.println("Original list:");
		g.printList();
		
		System.out.println("New list:");
		head=g.reverse(head, k,true);
		g.printList();

	}

}
