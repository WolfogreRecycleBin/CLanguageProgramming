/*4.9�����������������������Լ������С������*/
#include<stdio.h>
int main(void)
{
	int n,m,i,temp,lcm,gcd;
	printf("Input two integers: ");scanf("%d %d",&n,&m);
	if(n<m) 
	{
		temp=n;
		n=m;
		m=temp;
	}//��֤n����m
	for(i=m;i>=1;i--)//�����Լ��gcd
	{
		if(n%i==0 && m%i==0)
		{
			gcd=i;
			break;
		}
	}
	for(i=n;i<=n*m;i++)//����С������lcm
	{
		if(i%n==0 && i%m==0)
		{
			lcm=i;
			break;
		}
	}
	printf("LCM is %d, GCD is %d",lcm,gcd);
	return 0;
}
