/*8.5���庯��strmcpy(s,t,m)��ʵ���ַ�������*/
#include<stdio.h>
int main(void)
{
	void strmcpy(char *str1, char *str2, int n);
	char str1[80],str2[80];
	int n;
	printf("Input a string: ");gets(str2);
	printf("Input an integer: ");scanf("%d",&n);	
	strmcpy(str1,str2,n);
	printf("Output is: %s",str1);
	return 0;
}

/*�������ַ���str2�дӵ�n���ַ�(��)��ʼ��ȫ���ַ����Ƶ��ַ���str1��*/
void strmcpy(char *str1, char *str2, int n)
{
	char *p=NULL;
	p=str2+n-1;
	while(*p!='\0')
	{
		*str1=*p;
		str1++;
		p++;
	}
	*str1=*p;
}
