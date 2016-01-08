/*8.7输出其中最大的字符串*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[5][80],maxstr[80];
	int i;
	puts("Input 5 strings:");//试试新函数的用法
	for(i=0;i<5;i++) scanf("%s",str[i]);
	strcpy(maxstr,str[0]);
	for(i=1;i<5;i++)
	{
		if(strcmp(maxstr,str[i])<0) strcpy(maxstr,str[i]);
	}
	printf("Max is:%s",maxstr);
	return 0;
}
