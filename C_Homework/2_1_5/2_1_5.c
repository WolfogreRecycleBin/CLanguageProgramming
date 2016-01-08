/*2.1.5输入一个三位正整数，求解并输出该数的个位数、十位数和百位数*/
#include<stdio.h>
int main(void)
{
	int num;
	scanf("%d",&num);
	printf("%d %d %d",num%10,num%100/10,num/100);
	return 0;
}

