#include<stdio.h>
int main()
{
int bt[20],wt[20],tat[20],i,n;
float wtavg,tatavg;
printf("\nEnter the number of processes -- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
			printf("\nEnter Bursttime for process %d-- ",i);
			scanf("%d",&bt[i]);
}
wt[1]=wtavg=0;
tat[1]=tatavg=bt[1];
for(i=2;i<=n;i++)
{
		wt[i] = wt[i-1] +bt[i-1];
		tat[i] = tat[i-1] +bt[i];
		wtavg = wtavg + wt[i];
		tatavg = tatavg + tat[i];
}
printf("\tProcess\tBursttime\tWaitingtime\tTurnaroundtime\n");
for(i=1;i<=n;i++){
			printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
}
printf("\nAverage Waiting Time -- %f",wtavg/n);
printf("\nAverage Turnaround Time -- %f",tatavg/n);
}
