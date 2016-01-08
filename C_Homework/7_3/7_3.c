/*7.3交换最大、最小值*/
#include<stdio.h>
int main(void)
{
	int num[10],n,i,max,maxindex,min,minindex;
	printf("Input n: ");scanf("%d",&n);
	printf("Input %d integers: ",n);
	for(i=1;i<=n;i++) scanf("%d",&num[i-1]);
	min=num[0];minindex=0;
	for(i=1;i<n;i++) 
	{
		if(num[i]<min) 
	    {
		min=num[i];
		minindex=i;
     	}
	}
	{
		int t;
		t=num[0];
		num[0]=num[minindex];
		num[minindex]=t;
	}
	max=num[0];maxindex=0;
	for(i=1;i<n;i++) 
	{
		if(num[i]>max) 
	    {
		max=num[i];
		maxindex=i;
     	}
	}
	{
		int t;
		t=num[n-1];
		num[n-1]=num[maxindex];
		num[maxindex]=t;
	}
	printf("After swapped: ");
	for(i=1;i<=n;i++) printf("%d ",num[i-1]);
	return 0;
}
