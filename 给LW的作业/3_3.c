/*统计字符个数*/
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int i,letter=0, blank=0, digit=0, other=0;
	char ch;
	bool flag;
	printf("Input 10 characters: ");
	for (i=1;i<=10;i++)
	{
		ch=getchar();
		/*数据输入的方法为连续输入十个字符，再输入回车（如"123%%%aaa?/n"，
		程序继续运行，并依次读入123***aaa?，/n作为第11个字符并没有被读入，
		但是如果存在第11次读入，/n作为第11个字符被读入。如果输入"123%%%/n"，
		程序在输入/n继续运行，并读入7个字符（/n作为第7个），程序暂停，等待输
		入其余的字符*/
		flag=false;
		if (ch>='0' && ch<='9')  
		//单个字符用''括起来，如'A'，如果用""括起来，如"A"，会被认为是字符串类型，'A'与"A"不相等
		{
			digit++;
			flag=true;
		}
		if (ch==' ')  
		{
			blank++;
			flag=true;
		}
		if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))  
		{
			letter++;
			flag=true;
		}
		if (! flag) other++;
	}
	
	printf("letter=%d, blank=%d, digit=%d, other=%d",letter, blank, digit, other);

	return 0;
}
