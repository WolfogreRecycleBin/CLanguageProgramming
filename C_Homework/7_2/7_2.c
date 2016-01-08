/*7.2求一组整数的最大值及其下标*/
#include<stdio.h>
int main(void)
{
	int num[10],n,i,max,index;
	printf("Input n: ");scanf("%d",&n);
	printf("Input %d integers: ",n);
	for(i=1;i<=n;i++) scanf("%d",&num[i-1]);
	max=num[0];index=0;
	for(i=1;i<n;i++) 
	if(num[i]>max) 
	{
		max=num[i];
		index=i;
	}
	printf("max=%d, index=%d",max,index);
	return 0;
}
