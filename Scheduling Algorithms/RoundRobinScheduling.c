//Implement Round Robin Scheduling

#include<stdio.h>

int main()
{
      int i,n,total=0,x,cnt=0,timeQuantum,waitTime=0,turnAroundTime=0,arrivalTime[10],burstTime[10],temp[10];
      float averageWaitTime,averageTurnAroundTime;

      printf("Enter number of Processes:\n");
      scanf("%d",&n);
      x=n;
      for(i=0;i<n;i++)
      {
            printf("Process Number %d : ",i+1);
            printf("Arrival Time:");
            scanf("%d",&arrivalTime[i]);
            printf("Burst Time:");
            scanf("%d",&burstTime[i]);
            temp[i]=burstTime[i];
      }

      printf("\nEnter Time Quantum:");
      scanf("%d",&timeQuantum);
      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(total=0,i=0;x!=0;)
      {
            if(temp[i]<=timeQuantum&&temp[i]>0){
                  total=total+temp[i];
                  temp[i]=0;
                  cnt=1;
            }else if(temp[i]>0){
                  temp[i]=temp[i]-timeQuantum;
                  total=total+timeQuantum;
            }

            if(temp[i]==0&&cnt==1)
            {
                  x--;
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d",i+1,burstTime[i],total-arrivalTime[i],total-arrivalTime[i]-burstTime[i]);
                  waitTime=waitTime+total-arrivalTime[i]-burstTime[i];
                  turnAroundTime=turnAroundTime+total-arrivalTime[i];
                  cnt=0;
            }
            if(i==n-1)
                i=0;
            else if(arrivalTime[i+1]<=total)
                i++;
            else
                i=0;
      }

      averageWaitTime=waitTime*1.0/n;
      averageTurnAroundTime=turnAroundTime*1.0/n;
      printf("\n\nAverage Waiting Time : %f",averageWaitTime);
      printf("\nAverage Turnaround Time : %f\n",averageTurnAroundTime);

      return 0;
}
