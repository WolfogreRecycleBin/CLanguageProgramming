/*7.8���ַ����в���ĳ�ַ�*/
#include<stdio.h>
int main(void)
{
	char string[81],ch,aimch;
	int index,aimindex=-1;
	printf("Input a character: ");scanf("%c",&aimch);
	getchar();//��������aimchֵ����ʱ�����س�����Ӱ��
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
