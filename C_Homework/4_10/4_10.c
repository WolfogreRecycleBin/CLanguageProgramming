/*4.10求200以内的完数*/
//直接写有点烦，决定用自定义函数
#include<stdio.h>
int main(void)
{
	int i,j,sum;
	for(i=1;i<=200;i++)
	{
		sum=0;
		if(i==1) sum=sum+1;
	    for(j=1;j<i;j++)  if(i%j==0) sum=sum+j;
		if(sum==i) 
		{
			printf("%d ",i);
		}
		
	}
	return 0;
}







