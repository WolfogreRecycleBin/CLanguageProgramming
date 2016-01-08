/*6.1数制转换*/
#include<stdio.h>
int main(void)
{
	int num;
	printf("Input a decimal: ");scanf("%d",&num);
	printf("The octal is %o\n",num);
	printf("The hexadecimal is %X",num);//以%x表示，输出的是小写字母，%X则为的大写
	return 0;
}

