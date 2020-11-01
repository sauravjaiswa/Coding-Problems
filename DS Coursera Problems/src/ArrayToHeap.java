import java.io.*;
import java.util.*;

public class ArrayToHeap {
	
	public static int maxSize=10000,n;
	public static long heap[]=new long[maxSize];
	public static LinkedList<String> swaps=new LinkedList<>();
	
	public static void swap(int i,int j) {
		long temp=heap[i];
		heap[i]=heap[j];
		heap[j]=temp;
//		cnt++;
		swaps.add(i+" "+j);
	}
	
	public static int leftChild(int i) {
		return (2*i+1);
	}
	
	public static int rightChild(int i) {
		return (2*i+2);
	}
	
	public static void shiftDown(int i) {
		int currIndex=i;
		int l=leftChild(currIndex);
		int r=rightChild(currIndex);
		
		if(l<n && heap[l]<heap[currIndex])
			currIndex=l;
		
		if(r<n && heap[r]<heap[currIndex])
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
	
	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int i;
		
		n=Integer.parseInt(br.readLine());
		heap=new long[maxSize];

		String inp=br.readLine();
		String tmp[]=inp.split(" ");
		for(i=0;i<n;i++)
			heap[i]=Integer.parseInt(tmp[i]);
		
		buildHeap();
		System.out.println(swaps.size());
		
		for(i=0;i<swaps.size();i++)
		{
			System.out.println(swaps.get(i));
		}
//		
		for(i=0;i<n;i++)
			System.out.println(heap[i]);
	}

}
