/*4.6输入一个整数，将其逆序输出*/
#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter x: ");scanf("%d",&num);
	if(num<0)
	{
		printf("-");
		num=-num;
	}
	while(num!=0)
	{
		printf("%d",num%10);
		num=num/10;
	}
	return 0;
}
