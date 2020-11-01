import java.io.*;
import java.util.*;

public class Heaps {
	
	public static int maxSize=101,n;
	public static int heap[]=new int[maxSize];
	
	public static void swap(int i,int j) {
		int temp=heap[i];
		heap[i]=heap[j];
		heap[j]=temp;
	}
	
	public static int parent(int i) {
		return (int)Math.floor(i/2);
	}
	
	public static int leftChild(int i) {
		return (2*i+1);
	}
	
	public static int rightChild(int i) {
		return (2*i+2);
	}
	
	public static void shiftUp(int i) {
		while(i>=1 && heap[i]>heap[parent(i)])
		{
			swap(i,parent(i));
			i=parent(i);
		}
	}
	
	public static void shiftDown(int i) {
		int currIndex=i;
		int l=leftChild(currIndex);
		int r=rightChild(currIndex);
		
		if(l<n && heap[l]>heap[currIndex])
			currIndex=l;
		if(r<n && heap[r]>heap[currIndex])
			currIndex=r;
		
		if(currIndex!=i) {
			swap(i,currIndex);
			shiftDown(currIndex);
		}
	}
	
	public static void buildHeap() {
		int lastNonLeaf=(n/2)-1;	//Index of last non-leaf node
		int i;
		
		for(i=lastNonLeaf;i>=0;i--)
			shiftDown(i);
	}
	
	public static void insert(int ele) {
		if(n==maxSize)
			System.out.println("Maximum limit reached");
		
		n=n+1;
		heap[n-1]=ele;
		shiftUp(n-1);
		printHeap();
			
	}
	
	public static int extractMax() {
		int max=heap[0];
		heap[0]=heap[n-1];
		n=n-1;
		shiftDown(0);
		return max;
	}
	
	public static void remove(int pos) {
		heap[pos-1]=Integer.MAX_VALUE;
		shiftUp(pos-1);
		extractMax();
	}
	
	public static void changePriority(int i,int p) {
		int old=heap[i];
		heap[i]=p;
		if(p>old)
			shiftUp(i);
		else
			shiftDown(i);
	}

	public static void printHeap() {
		int i;
		System.out.println("Heap is:");
		for(i=0;i<n;i++)
			System.out.print(heap[i]+" ");
		System.out.println();
	}
	
	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int i;
		
		System.out.println("Enter size of heap:");
		n=Integer.parseInt(br.readLine());
		heap=new int[maxSize];
		System.out.println("Enter elements in the heap array:");
		for(i=0;i<n;i++)
			heap[i]=Integer.parseInt(br.readLine());
		
		buildHeap();
		printHeap();
		
		System.out.println("Enter element to be inserted:");
		int ele=Integer.parseInt(br.readLine());
		insert(ele);

		System.out.println("The maximum is:"+extractMax());
		printHeap();
		
		System.out.println("Enter position from where element needs to be deleted:");
		int pos=Integer.parseInt(br.readLine());
		remove(pos);
		System.out.println("Heap after removal:");
		printHeap();
		
		changePriority(2,1);
		System.out.println("After changing priority of 3rd element to 1");
		printHeap();
	}

}
