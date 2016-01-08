/*7.4给一组整数排序*/
#include<stdio.h>
int main(void)
{
	int num[10],n,i,j;
	printf("Input n: ");scanf("%d",&n);
	printf("Input %d integers: ",n);
	for(i=1;i<=n;i++) scanf("%d",&num[i-1]);
	for(i=0;i<=n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(num[j]<num[j+1])
			{
				int t;
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	printf("After sorted: ");
	for(i=0;i<=n-1;i++) printf("%d ",num[i]);
	return 0;
}
