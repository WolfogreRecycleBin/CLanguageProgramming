/*4.5Ë®ÏÉ»¨Êý*/
#include<stdio.h>
int main(void)
{
	int m,n,abc,a,b,c;
	printf("Input m: ");scanf("%d",&m);
    printf("Input n: ");scanf("%d",&n);
	for (abc=m;abc<=n;abc++)
	{
		a=abc/100;
		b=(abc/10)%10;
		c=abc%10;
		if((a*a*a+b*b*b+c*c*c)==abc) printf("%d\n",abc);
	}
	return 0;
}
