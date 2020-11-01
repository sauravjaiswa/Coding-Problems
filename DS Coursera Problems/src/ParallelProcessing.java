//Parallel Processing

import java.io.*;
import java.util.*;

public class ParallelProcessing {
	
	class Thread{
		long threadNumber,threadTime;
		Thread(long threadNumber,long threadTime){
			this.threadNumber=threadNumber;
			this.threadTime=threadTime;
		}
	}
	
	public static Queue<Long> time=new LinkedList<>();
	public static Thread thread[];
	public static int n,m;
	
	public static void swap(int i,int j) {
		Thread temp=thread[i];
		thread[i]=thread[j];
		thread[j]=temp;
	}
	
	public static void heapify(int i) {
		int curr=i;
		int l,r;
		
		l=2*i+1;
		r=2*i+2;
		
		if(l<n) {
			if (thread[l].threadTime<thread[curr].threadTime)
                curr=l;
            else if (thread[l].threadTime<thread[curr].threadTime && thread[l].threadNumber<thread[curr].threadNumber)
                curr=l;
		}
		
		if(r<n){
			if (thread[r].threadTime<thread[curr].threadTime)
                curr=r;
            else if (thread[r].threadTime<thread[curr].threadTime && thread[r].threadNumber<thread[curr].threadNumber)
                curr=r;
		}
		
		if(curr!=i) {
			swap(i,curr);
			heapify(curr);
		}
	}
	
	public static void buildHeap() {
		int lastNonLeaf=(n/2)-1;
		int i;
		
		for(i=lastNonLeaf;i>=0;i--)
			heapify(i);
	}
	
	public static Thread extractMin() {
		Thread min=thread[0];
		return min;
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int i,space;
		
		String inp=br.readLine();
		
		n=Integer.parseInt(inp.split(" ")[0]);
		m=Integer.parseInt(inp.split(" ")[1]);
		if(n<m)
			space=n;
		else
			space=m;
		thread=new Thread[space];
		
		inp=br.readLine();
		for(i=0;i<m;i++)
			time.add(Long.parseLong(inp.split(" ")[i]));
		
		LinkedList<Long> assignedThreads=new LinkedList<>();
		LinkedList<Long> startTime=new LinkedList<>();
		
		ParallelProcessing p=new ParallelProcessing();
		
		for(i=0;i<space;i++) {
			assignedThreads.push((long)i);
			startTime.push((long)0);
		}
		
		for(i=0;i<space;i++) {
			thread[i]=p.new Thread((long)i,time.poll());
		}
		
		buildHeap();
		Thread temp;
		while(!time.isEmpty()) {
			temp=extractMin();
			assignedThreads.push(temp.threadNumber);
			startTime.push(temp.threadTime);
			
			thread[0].threadTime+=time.poll();
			buildHeap();
		}
		
		for(i=assignedThreads.size()-1;i>=0;i--)
			System.out.println(assignedThreads.get(i)+" "+startTime.get(i));
		
	}

}
