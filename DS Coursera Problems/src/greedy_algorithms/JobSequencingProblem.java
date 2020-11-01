/*Job Sequencing Problem
Given an array of jobs where every job has a deadline and associated profit if the job is finished before the deadline. It is also given 
that every job takes single unit of time, so the minimum possible deadline for any job is 1. How to maximize total profit if only one job can 
be scheduled at a time.
Examples:
Input: Four Jobs with following 
deadlines and profits
JobID  Deadline  Profit
  a      4        20   
  b      1        10
  c      1        40  
  d      1        30
Output: Following is maximum 
profit sequence of jobs
        c, a   */

package greedy_algorithms;
import java.io.*;
import java.util.*;

public class JobSequencingProblem {
	
	String jobId;
	int deadline;
	int profit;
	
	public JobSequencingProblem(String jobId,int deadline,int profit) {
		this.jobId=jobId;
		this.deadline=deadline;
		this.profit=profit;
	}
	
	public static String[] jobSequence(ArrayList<JobSequencingProblem> arr,int n){
		String jobs[]=new String[n];
		Collections.sort(arr,JobSequencingProblem.sorted);
		int i,prevEnd;
		
		jobs[arr.get(0).deadline-1]=arr.get(0).jobId;
		
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
		
		int n=Integer.parseInt(br.readLine());
		int i;
		
		String temp1=br.readLine();
		String t1[]=temp1.split(" ");
		ArrayList<JobSequencingProblem> arr=new ArrayList<>();
		
		for(i=0;i<n;i++)
			arr.add(new JobSequencingProblem(t1[0],Integer.parseInt(t1[1]),Integer.parseInt(t1[2])));

	}
	
	@Override
	public String toString() {
		return "(" + jobId + ", " + deadline + ", " + profit +")";
	}



	public static Comparator<JobSequencingProblem> sorted=new Comparator<JobSequencingProblem>() {

		public int compare(JobSequencingProblem o1, JobSequencingProblem o2) {

		   int profit1=o1.profit;
		   int profit2=o2.profit;

		   /*For ascending order*/
		   return profit2-profit1;

		   /*For descending order*/
		   //rollno2-rollno1;
	   }};

}
