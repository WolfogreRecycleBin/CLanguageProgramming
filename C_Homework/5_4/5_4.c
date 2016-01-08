/*5.4求两个正整数之间的水仙花数*/
#include<stdio.h>
int main(void)
{
	int m,n,i;
	int is(int t);
	printf("Input m: ");scanf("%d",&m);
	printf("Input n: ");scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		if(is(i)==1) printf("%d\n",i);
	}
	return 0;
}

/*判断abc是（1）否（0）为水仙花数*/
int is(int abc)
{
	int a,b,c;
	if(abc<100 || abc>999) return 0;
	a=abc/100;
	b=(abc/10)%10;
	c=abc%10;
	if(abc==a*a*a+b*b*b+c*c*c) return 1;
	else return 0;
}








