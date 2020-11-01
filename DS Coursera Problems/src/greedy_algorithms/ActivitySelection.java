/*Example 2 : Consider the following 6 activities sorted by by finish time.
     start[]  =  {1, 3, 0, 5, 8, 5};
     finish[] =  {2, 4, 6, 7, 9, 9};
A person can perform at most four activities. The maximum set of activities that can be executed is {0, 1, 3, 4} [ These are indexes in start[] 
and finish[] ]*/


package greedy_algorithms;

import java.io.*;
import java.util.*;
import java.util.Comparator;

public class ActivitySelection {
	
	int start;
	int end;
	static int n;
	
	public ActivitySelection(int start,int end) {
		this.start=start;
		this.end=end;
	}
	
	
	
	public static ArrayList<ActivitySelection> maxActivity(ArrayList<ActivitySelection> arr,int n){
		ArrayList<ActivitySelection> result=new ArrayList<>();
		Collections.sort(arr,ActivitySelection.sorted);
		int i,prevEnd;
		
		result.add(arr.get(0));
		prevEnd=arr.get(0).end;
		
		for(i=1;i<n;i++)
		{
			if(arr.get(i).start>prevEnd)
			{
				result.add(arr.get(i));
				prevEnd=arr.get(i).end;
			}
		}
		return result;
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int i,j;
		String temp1,temp2,t1[],t2[];
		
		n=Integer.parseInt(br.readLine());
		
		temp1=br.readLine();
		temp2=br.readLine();
		t1=temp1.split(" ");
		t2=temp2.split(" ");
		ArrayList<ActivitySelection> arr=new ArrayList<>();
		
		for(i=0;i<n;i++)
			arr.add(new ActivitySelection(Integer.parseInt(t1[i]),Integer.parseInt(t2[i])));
		
		ArrayList<ActivitySelection> result=maxActivity(arr,n);
		System.out.println(result.toString());
		
	}



	@Override
	public String toString() {
		return "(" + start + ", " + end + ")";
	}



	public static Comparator<ActivitySelection> sorted=new Comparator<ActivitySelection>() {

		public int compare(ActivitySelection o1, ActivitySelection o2) {

		   int end1=o1.end;
		   int end2=o2.end;

		   /*For ascending order*/
		   return end1-end2;

		   /*For descending order*/
		   //rollno2-rollno1;
	   }};

}
