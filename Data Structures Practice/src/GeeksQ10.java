//Find nth node from the end of linked list

import java.io.*;

public class GeeksQ10 {

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
	
	public int getNthFromLast(int n)
    {
    	// Your code here	
    	Node temp=head;
    	int len,tempN;
    	len=0;
    	
    	while(temp!=null)
    	{
    	    temp=temp.next;
    	    len++;
    	}
    	
    	tempN=len-n;
    	int cnt=0;
    	temp=head;
    	
    	if(tempN<0)
    	return -1;
    	else
    	{
    	    while(cnt<tempN)
    	    {
    	        temp=temp.next;
    	        cnt++;
    	    }
    	    return temp.data;
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
		GeeksQ10 g=new GeeksQ10();
		
		System.out.println("Enter length of list:");
		n=Integer.parseInt(br.readLine());
		System.out.println("Enter value of k:");
		k=Integer.parseInt(br.readLine());
		System.out.println("Enter data in list:");
		
		g.insert(n);
		
		System.out.println("Original list:");
		g.printList();
		
		int val=g.getNthFromLast(k);
		System.out.println(val);

	}

}
