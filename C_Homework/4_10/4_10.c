/*4.10��200���ڵ�����*/
//ֱ��д�е㷳���������Զ��庯��
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







