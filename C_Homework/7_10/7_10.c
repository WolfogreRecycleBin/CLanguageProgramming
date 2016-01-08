/*7.10用对应字母替换字符串中的大写字母*/
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

/*返回字符t所对应得按照题目要求变换后的字符*/
char replace(char t)
{
	if(t>='A'&&t<='Z') return'Z'-(t-'A');
	else return t;
}
