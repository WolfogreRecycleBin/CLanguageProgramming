/*5.6输入2个整数，分别将其逆向输出*/
#include<stdio.h>
int main(void)
{
	int m1,m2;
	int fun(int t);
	printf("Input m1: ");scanf("%d",&m1);
	printf("Input m2: ");scanf("%d",&m2);
	printf("%d's reverse is: %d\n",m1,fun(m1));
    printf("%d's reverse is: %d",m2,fun(m2));
	return 0;
}

/*返回t的逆向值*/
int fun(int t)
{
	int flag=1,num=0;
	if(t<0) 
	{
		t=-t;
		flag=-1;
	}
	while(t>0)
	{
		num=num*10+t%10;
		t=t/10;
	}
	num=num*flag;
  	return num;
}



