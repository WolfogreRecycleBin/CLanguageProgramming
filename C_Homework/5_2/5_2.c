/*5.2������������֮���������������*/
#include<stdio.h>
int main(void)
{
	int m,n,count=0,sum=0,i;
	int prime(int t);
	printf("Input m: ");scanf("%d",&m);
	printf("Input n: ");scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		if(prime(i)==1) 
		{
			count++;
			sum=sum+i;
		}
	}
	printf("count=%d, sum=%d",count,sum);
	return 0;
}

/*�ж�t�ǣ�1����0��Ϊ����*/
int prime(int t)
{
	int i,flag=-1;
	if (t<=1) return 0;
	for(i=2;i<=(t/2);i++)
	{
		if(t%i==0) 
		{flag=1;
		  break;
		}
	}
	if(flag==-1) return 1;
	else return 0;
}








