/*6.3统计一行字符中单词的个数*/
#include<stdio.h>
int main(void)
{
	char ch;
	int flag;//读入单词开关
	int count=0;;
	printf("Input words: ");
	flag=0;//读入单词开关关闭
	while((ch=getchar())!='\n')
	{
		if(flag==0 && (ch>='a' && ch<='z' || ch>='A' && ch<='Z')) 
		{
			flag=1;//读入单词开关打开
			count++;
		}
		if(flag==1 && !(ch>='a' && ch<='z' || ch>='A' && ch<='Z'))
		{
			flag=0;//读入单词开关关闭
		}
	}
	printf("count=%d",count);
	return 0;
}
