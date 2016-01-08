/*8.5定义函数strmcpy(s,t,m)，实现字符串复制*/
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

/*处理：将字符串str2中从第n个字符(含)开始的全部字符复制到字符串str1中*/
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
