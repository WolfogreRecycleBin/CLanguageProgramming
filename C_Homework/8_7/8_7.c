/*8.7������������ַ���*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[5][80],maxstr[80];
	int i;
	puts("Input 5 strings:");//�����º������÷�
	for(i=0;i<5;i++) scanf("%s",str[i]);
	strcpy(maxstr,str[0]);
	for(i=1;i<5;i++)
	{
		if(strcmp(maxstr,str[i])<0) strcpy(maxstr,str[i]);
	}
	printf("Max is:%s",maxstr);
	return 0;
}
