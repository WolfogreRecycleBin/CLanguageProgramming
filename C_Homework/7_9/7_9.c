/*7.9统计一组字符串中大写辅音字母的个数*/
#include<stdio.h>
int main(void)
{
	char string[81],ch;
	int i,count=0;
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
		ch=string[i];
		if(ch>='A'&&ch<='Z'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U') count++;
		if(ch=='\0') break;
		i++;
	}
	printf("count=%d",count);
	return 0;
}
