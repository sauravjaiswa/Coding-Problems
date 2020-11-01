//Function to check if a singly linked list is a palindrome

import java.io.*;
import java.util.*;

public class GeeksQ11 
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
	
	public int checkPalindrome()
    {
    	Node temp=head;
    	int flag=0;
    	
    	Stack<Integer> s=new Stack<Integer>();
    	
    	while(temp!=null)
    	{
    		s.push(temp.data);
    		temp=temp.next;
    	}
    	
    	while(head!=null)
    	{
    		int x=s.peek();
    		s.pop();
    		
    		if(x!=head.data)
    		{
    			flag=0;
    			break;
    		}
    		else
    		{
    			flag=1;
    		}
    		head=head.next;
    	}
    	return flag;
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
		GeeksQ11 g=new GeeksQ11();
		
		System.out.println("Enter length of list:");
		n=Integer.parseInt(br.readLine());
		System.out.println("Enter data in list:");
		
		g.insert(n);
		
		
		System.out.println("Original list:");
		g.printList();
		
		int val=g.checkPalindrome();
		if(val==1)
		System.out.println("Palindrome");
		else
			System.out.println("Not palindrome");

	}
}
