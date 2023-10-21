#include<stdio.h>
int main()
{
			int p[20],bt[20],pri[20],wt[20],tat[20],i,k,n,temp; 
			float wtavg,tatavg;
			printf("enter the number of processes --- ");
			scanf("%d",&n);
			for(i=1;i<=n;i++){
			p[i]=i;
			printf("enter the bursttime and priority of Process%d--",i); 
			scanf("%d %d",&bt[i],&pri[i]);
			}
			for(i=1;i<=n;i++)
					for(k=i+1;k<=n;k++)
							if(pri[i]>pri[k]){
											temp=p[i];
											p[i]=p[k];
											p[k]=temp;
											temp=bt[i];
											bt[i]=bt[k];
											bt[k]=temp;
											temp=pri[i];
											pri[i]=pri[k];
											pri[k]=temp;
							}
			wtavg=wt[1]=0;
			tatavg=tat[1]=bt[1];
			for(i=2;i<=n;i++)
			{
						wt[i]=wt[i-1]+bt[i-1];	
						tat[i]=tat[i-1]+bt[i];
						wtavg=wtavg+wt[i];
						tatavg=tatavg+tat[i];
			}
			printf("\tProcess\tBursttime\tWaitingtime\tTurnaroundtime\n");
for(i=1;i<=n;i++){
			printf("\n\tP%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
}
printf("\nAverage Waiting Time -- %f",wtavg/n);
printf("\nAverage Turnaround Time -- %f",tatavg/n);
}
