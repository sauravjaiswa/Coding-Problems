import java.io.*;
import java.util.*;

class Model{
	int startTime,processTime;
	
	Model(int startTime,int processTime){
		this.startTime=startTime;
		this.processTime=processTime;
	}
}

public class NetworkPacketProcessingSimulation {

	static LinkedList<Model> queue=new LinkedList();
	static LinkedList<Model> incomingPackets=new LinkedList();
	static LinkedList<Integer> output=new LinkedList();
	
	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int S,N,i,st,pt;
		String inp=br.readLine();
		String tmp[]=inp.split(" ");
		
		S=Integer.parseInt(tmp[0]);
		N=Integer.parseInt(tmp[1]);
		
		for(i=0;i<N;i++)
		{
			inp=br.readLine();
			tmp=inp.split(" ");
			st=Integer.parseInt(tmp[0]);
			pt=Integer.parseInt(tmp[1]);
			
			incomingPackets.add(new Model(st,pt));
		}
		
		int buffSize=S,temp=-1,tN=N,buffTemp=-1,flag=0,start=0;
		Model packetSent;
		if(buffSize>=tN) {
			packetSent=incomingPackets.poll();
			while(tN>0) {
				if(packetSent.startTime>temp)
					output.add(packetSent.startTime);
				else
					output.add(temp);
				temp=packetSent.startTime+packetSent.processTime;
				tN--;
			}
		}
		else {
			buffTemp=temp=incomingPackets.getFirst().startTime;
			while(tN>0) {
				packetSent=incomingPackets.poll();
				
				if(buffSize>0) {
//					System.out.println(packetSent.startTime);
//					if(packetSent.startTime>=temp)
						output.add(buffTemp);
//					else
//						output.add(temp);
					start=packetSent.startTime;
					buffTemp=buffTemp+packetSent.processTime;
					temp=packetSent.startTime+packetSent.processTime;
					tN--;
					buffSize--;
					flag=1;
				}
				else {
					if(flag==1)
					{
						flag=0;
						if(temp==packetSent.startTime+packetSent.processTime)
						{
							output.add(temp);
						}
						
						else if(start==packetSent.startTime) {
							output.add(-1);
							temp=-1;
						}
						else if(buffTemp>temp&&packetSent.startTime>=temp)
						{
							packetSent.startTime=buffTemp;
							output.add(packetSent.startTime);
						}else if(buffTemp<temp) {
							packetSent.startTime=buffTemp;
							output.add(-1);
							temp=-1;
						} else if(packetSent.startTime>=temp) {
							output.add(packetSent.startTime);
							temp=packetSent.startTime;
						}
//						else {
//							packetSent.startTime=buffTemp;
//							output.add(-1);
//							temp=-1;
//						}
//						else {
//							output.add(packetSent.startTime);
//							temp=buffTemp+packetSent.processTime;
//						}
						
					}
					else
					{
						
						if(packetSent.startTime>=temp)
							output.add(packetSent.startTime);
						else
							output.add(-1);
					}
					temp=packetSent.startTime+packetSent.processTime;
					tN--;
				}
			}
		}
		Iterator<Integer> itr=output.iterator();  
		while(itr.hasNext())
			System.out.println(itr.next());
	}

}
