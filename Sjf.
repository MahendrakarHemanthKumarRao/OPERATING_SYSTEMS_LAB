#include<stdio.h>
int main()
{
  int p[20],bt[20],wt[20],tat[20],i,k,n,temp;
  float wtavg,tatavg;
  printf("\nenter the number of processes-- ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    p[i]=i;
    printf("enter bursttime for process%d-- ",i);
    scanf("%d",&bt[i]);
  }
  for(i=1;i<=n;i++)
  {
    for(k=i+1;k<=n;k++) {
        if(bt[i]>bt[k])
        {
           temp=bt[i];
           bt[i]=bt[k];
 										bt[k]=temp;
											temp=p[i];
											p[i]=p[k];
											p[k]=temp;
								}
					}
		}
  wt[1]=wtavg=0;
		tat[1]=tatavg =bt[1]; 
		for(i=2;i<=n;i++)
		{
				wt[i] = wt[i-1] + bt[i-1];
				tat[i] = tat[i-1] + bt[i];	
				wtavg = wtavg + wt[i];
				tatavg = tatavg + tat[i];
		}
				printf("\n\tprocess\tbursttime\twaitingtime\tturnaroundtime\n");
				for(i=1;i<=n;i++) {
						printf("\n\tp%d\t\t%d\t\t%d\t\t%d",p[i],bt[i],wt[i],tat[i]);
				}
						printf("\naverage waitingtime-- %f", wtavg/n);
						printf("\naverage turnaroundtime-- %f", tatavg/n);
}
