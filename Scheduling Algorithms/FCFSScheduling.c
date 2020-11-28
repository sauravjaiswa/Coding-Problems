// C program for implementation of FCFS scheduling
#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter number of processes:\n");
    scanf("%d",&n);
	int process[n],burstTime[n],waitTime[n],turnAroundTime[n];

	printf("Enter burst times respectively:\n");
	for(i=0;i<n;i++){
        process[i]=i+1;
        scanf("%d",&burstTime[i]);
    }

    waitTime[0]=0;
    for(i=1;i<n;i++)
		waitTime[i]=burstTime[i-1]+waitTime[i-1];

    for(i=0;i<n;i++)
		turnAroundTime[i]=burstTime[i]+waitTime[i];

	int totalWaitTime=0,totalTurnArndTime=0;
    for(i=0;i<n;i++)
	{
		totalWaitTime=totalWaitTime+waitTime[i];
		totalTurnArndTime=totalTurnArndTime+turnAroundTime[i];

		printf(" %d ",(i+1));
		printf("	 %d ",burstTime[i]);
		printf("	 %d",waitTime[i]);
		printf("	 %d\n",turnAroundTime[i]);
	}

	float avgWait=(float)totalWaitTime/(float)n;
	float avgTurn=(float)totalTurnArndTime/(float)n;
	printf("Average waiting time = %f",avgWait);
	printf("\n");
	printf("Average turn around time = %f ",avgTurn);

	return 0;
}
