import java.util.*;

public class CollectingSignatures
{

	public class Segment 
    {
        int start, end;

        Segment(int start, int end) 
        {
            this.start = start;
            this.end = end;
        }
    }
	 
    public static List<Integer> optimalPoints(Segment[] segments) 
    {
        //write your code here
    	int i,j,flag,len,point;
    	len=segments.length;
    	Segment temp;
    	
    	List<Integer> points=new LinkedList<>();
    	
    	for(i=0;i<len-1;i++)
    	{
    		flag=0;
    		for(j=0;j<len-i-1;j++)
    		{
    			if(segments[j].end>segments[j+1].end)
    			{
    				temp=segments[j];
    				segments[j]=segments[j+1];
    				segments[j+1]=temp;
    				
    				flag=1;
    			}
    		}
    		if(flag==0)
    			break;
    	}
    	
    	j=0;
    	while(j!=len)
    	{
    		point=segments[j].end;
    		points.add(point);
    		j=j+1;
    		
    		for(i=j;i<len;i++)
    		{
    			if(segments[i].start<=point && point<=segments[i].end)
    				j=j+1;
    		}
    	}
        return points;
    }

    public static void main(String[] args)
    {
    	CollectingSignatures c=new CollectingSignatures();
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int start, end;
        
        Segment[] segments = new Segment[n];
        for (int i = 0; i < n; i++) 
        {
            start = scanner.nextInt();
            end = scanner.nextInt();
			segments[i]=c.new Segment(start,end);
        }
        
        
        List<Integer> points = optimalPoints(segments);
        
        for (int i = 0; i < n; i++) 
        {
        	System.out.println((i+1)+"\t"+segments[i].start+" "+segments[i].end);
        }
        
        System.out.println(points.size());
        for (int point : points) {
            System.out.print(point + " ");
        }
    }
}
 
