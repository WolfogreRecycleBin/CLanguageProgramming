/*5.7���m ~n ֮�����е�Fibonacci ��*/
#include<stdio.h>
int main(void)
{
	int m,n,num,i;
	int fib(int t);
	printf("Input m: ");scanf("%d",&m);
	printf("Input n: ");scanf("%d",&n);
	num=1;i=1;
	while(num<=n)
	{
		if(num>=m && num <=n) printf("%d ",num);
		num=fib(i);
		i++;
	}
	return 0;
}

/*���ص�n��Fibonacci ��*/
int fib(int n)
{
	int a=1,b=1,num,i;
	if(n==1 || n==2) return 1;
	for(i=3;i<=n;i++)
	{
		num=a+b;
		a=b;
		b=num;
	}
	return num;
}


















