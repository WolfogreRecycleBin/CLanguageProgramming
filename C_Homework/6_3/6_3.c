/*6.3ͳ��һ���ַ��е��ʵĸ���*/
#include<stdio.h>
int main(void)
{
	char ch;
	int flag;//���뵥�ʿ���
	int count=0;;
	printf("Input words: ");
	flag=0;//���뵥�ʿ��عر�
	while((ch=getchar())!='\n')
	{
		if(flag==0 && (ch>='a' && ch<='z' || ch>='A' && ch<='Z')) 
		{
			flag=1;//���뵥�ʿ��ش�
			count++;
		}
		if(flag==1 && !(ch>='a' && ch<='z' || ch>='A' && ch<='Z'))
		{
			flag=0;//���뵥�ʿ��عر�
		}
	}
	printf("count=%d",count);
	return 0;
}
