/*6.2�Ӽ�������3����������������������� (Ҫ��ʹ���������ʽ��*/
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
