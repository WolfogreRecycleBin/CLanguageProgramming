/*4.2求a +aa +aaa +aa…a(n 个a) 之和*/
#include<stdio.h>
int main(void)
{
	int a,n,s=0,i,num=0;
	printf("Input a, n: ");scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
		num=num+a;
		a=a*10;
		s=s+num;
	}
	printf("s=%d",s);
	return 0;
}
//以下是之前想的一个方法，同样正确但算法不是很好。
/*int main(void)
{
	int s,n,a,i,j,temp,power;
	printf("Input a, n: ");scanf("%d %d",&a,&n);
	s=0;
	for(i=n;i>=1;i--)
	{
		temp=a*i;
		power=1;
		j=1;
		while(j<=(n-i))//用for循环不好做，因为无论怎样for都会执行至少一次循环
		{
			power=power*10;
			j++;
		}//用对power的循环计算代替了pow(10,n-i)
		s=s+temp*power;
	}
	printf("s=%d",s);
	
	return 0;
}
//买表！骗老子说不用pow会更简单！简单你妹！*/
