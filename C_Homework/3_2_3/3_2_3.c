/*3.2.3求100~1000之间满足各位数字之和是5的所有数*/
#include<stdio.h>
int main(viod)
{
	int abc,a,b,c,count=0;
	for(abc=100;abc<1000;abc++)
	{
		a=abc/100;
		b=(abc/10)%10;
		c=abc%10;
		if (a+b+c==5)
		{
		    count++;
			printf("%4d",abc);
		}
	}
	printf("\nthere are %d numbers",count);
	return 0;
}
