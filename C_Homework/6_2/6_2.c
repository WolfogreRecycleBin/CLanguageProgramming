/*6.2从键盘输入3个整数，输出其中最大的数。 (要求使用条件表达式）*/
#include<stdio.h>
int main(void)
{
	int a,b,c,max;
	printf("Input 3 integers: ");scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(c>max)?c:max;
	printf("The maximum is: %d",max);
	return 0;
}
