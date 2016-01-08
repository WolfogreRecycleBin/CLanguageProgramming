/*7.8在字符串中查找某字符*/
#include<stdio.h>
int main(void)
{
	char string[81],ch,aimch;
	int index,aimindex=-1;
	printf("Input a character: ");scanf("%c",&aimch);
	getchar();//消除输入aimch值结束时所按回车键的影响
	printf("Input a string: ");
	index=0;
	while(1)
	{
		ch=getchar();
		if(ch!='\n') 
		{
			string[index]=ch;
			index++;
		}
		else
		{
			string[index]='\0';
			break;
		}
	}
	index=0;
	while(1)
	{
		if(string[index]==aimch)
			aimindex=index;
		else
			if(string[index]=='\0')
				break;
		index++;
	}
	if(aimindex==-1) printf("Not Found");
	else
	printf("index=%d",aimindex);
	return 0;
}
