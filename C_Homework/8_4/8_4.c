/*8.4�Զ��庯����ɾ���ַ����е��ַ�*/
#include<stdio.h>
int main(void)
{
	char ch,str[80];
	void delchar(char *str, char ch);
	printf("Input a string: ");gets(str);
	printf("Input a char: ");ch=getchar();
	delchar(str,ch);
	printf("After deleted, the string is: %s",str);
	return 0;
}

/*����ɾ���ַ���str�����е��ַ�ch*/
void delchar(char *str, char ch)
{
	void move(char *p);
	while(*str!='\0')
	{
		if(*str==ch) move(str);
		else str++;
	}
}

/*������ָ��pָ��ĵ�ַ����������ǰ��һ����ַ����'\0'����ǰ�Ʋ�ֹͣ*/
void move(char *p)
{
	while(*p!='\0')
	{
		*p=*(p+1);
		p++;
	}
	*p=*(p+1);
}
