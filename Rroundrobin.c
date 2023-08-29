#include<stdio.h>
int main()
{
			int bt[10],wt[10],tat[10],max,i,j,n,t,ct[10];
			float wtavg=0,tatavg=0,temp=0;
			printf("enter the nunber of processes-- ");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
					printf("\nenter bursttime for process%d-- ",i);
					scanf("%d",&bt[i]);
					ct[i]=bt[i];
			}
			printf("\nenter the size of timeslice-- ");
			scanf("%d",&t);
			max=bt[1];
			for(i=2;i<=n;i++)
					if(max<bt[i]){
								max=bt[i];
					}
		for(j=1;j<=(max/t)+1;j++){
				for(i=1;i<=n;i++) {
							if(bt[i]!=0){
										if(bt[i]<=t){
													tat[i]=temp+bt[i];
													temp=temp+bt[i];
													bt[i]=0;
											}
											else {
													bt[i]=bt[i]-t;
													temp=temp+t;
											}
									}					
								}
							}
		for(i=1;i<=n;i++){
		wt[i]=tat[i]-ct[i];
	 tatavg+=tat[i];
		wtavg+=wt[i];
		}
			printf("\n\tprocess\tbursttime\twaitingtime\tturnaroundtime\n");
				for(i=1;i<=n;i++) {
						printf("\n\tp%d\t\t%d\t\t%d\t\t%d",i,ct[i],wt[i],tat[i]);
				}
						printf("\naverage waitingtime-- %f", wtavg/n);
						printf("\naverage turnaroundtime-- %f", tatavg/n);
}
