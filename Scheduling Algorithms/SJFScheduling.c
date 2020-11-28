//Implement Shortest Job first with Arrival Time

#include<stdio.h>

 int main()
{
    int burstTime[20],processId[20],waitTime[20],turnAround[20],i,j,n,total=0,pos,temp;
    float avgWait,avgTurn;
    printf("Enter number of process:");
    scanf("%d",&n);

    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("Process Number %d : ",i+1);
        scanf("%d",&burstTime[i]);
        processId[i]=i+1;
    }

    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(burstTime[j]<burstTime[pos])
                pos=j;
        }

        temp=burstTime[i];
        burstTime[i]=burstTime[pos];
        burstTime[pos]=temp;

        temp=processId[i];
        processId[i]=processId[pos];
        processId[pos]=temp;
    }

    waitTime[0]=0;


    for(i=1;i<n;i++)
    {
        waitTime[i]=0;
        for(j=0;j<i;j++)
            waitTime[i]+=burstTime[j];

        total+=waitTime[i];
    }

    avgWait=(float)total/n;
    total=0;

    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        turnAround[i]=burstTime[i]+waitTime[i];
        total+=turnAround[i];
        printf("\n%d\t\t  %d\t\t    %d\t\t\t%d",processId[i],burstTime[i],waitTime[i],turnAround[i]);
    }

    avgTurn=(float)total/n;
    printf("\n\nAverage Waiting Time=%f",avgWait);
    printf("\nAverage Turnaround Time=%fn",avgTurn);

    return 0;
}
