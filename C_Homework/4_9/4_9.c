/*4.9输入两个正整数，求其最大公约数和最小公倍数*/
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
	}//保证n大于m
	for(i=m;i>=1;i--)//求最大公约数gcd
	{
		if(n%i==0 && m%i==0)
		{
			gcd=i;
			break;
		}
	}
	for(i=n;i<=n*m;i++)//求最小公倍数lcm
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
