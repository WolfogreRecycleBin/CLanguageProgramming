/*5.5���m ~n ֮�����������*/
#include<stdio.h>
int main(void)
{
	int m,n,i;
	int factorsum(int t);
	printf("Input m: ");scanf("%d",&m);
	printf("Input n: ");scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		if(i==factorsum(i)) printf("%5d",i);
	}
	return 0;
}

/*����t�����Ӻ�*/
int factorsum(int t)
{
	int sum=0,i;
	if(t==1) sum=1;
    for(i=1;i<t;i++)
	{
		if(t%i==0) sum=sum+i;
	}
	return sum;
}

