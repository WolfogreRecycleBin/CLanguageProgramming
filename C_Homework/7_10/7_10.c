/*7.10�ö�Ӧ��ĸ�滻�ַ����еĴ�д��ĸ*/
#include<stdio.h>
int main(void)
{
	char string[81],ch;
	int i;
	char replace(char t);
	printf("Input a string: ");
	i=0;
	while(1)
	{
		ch=getchar();
		if(ch!='\n') 
		{
			string[i]=ch;
			i++;
		}
		else
		{
			string[i]='\0';
			break;
		}
	}
	i=0;
	while(1)
	{
		if(string[i]!='\0')
			string[i]=replace(string[i]);
		else break;
		i++;
	}
	printf("After replaced: %s",string);
	return 0;
}

/*�����ַ�t����Ӧ�ð�����ĿҪ��任����ַ�*/
char replace(char t)
{
	if(t>='A'&&t<='Z') return'Z'-(t-'A');
	else return t;
}
