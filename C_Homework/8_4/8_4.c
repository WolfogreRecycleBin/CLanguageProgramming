/*8.4自定义函数，删除字符串中的字符*/
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

/*处理：删除字符串str中所有的字符ch*/
void delchar(char *str, char ch)
{
	void move(char *p);
	while(*str!='\0')
	{
		if(*str==ch) move(str);
		else str++;
	}
}

/*处理：将指针p指向的地址后所有数据前移一个地址，遇'\0'将其前移并停止*/
void move(char *p)
{
	while(*p!='\0')
	{
		*p=*(p+1);
		p++;
	}
	*p=*(p+1);
}
