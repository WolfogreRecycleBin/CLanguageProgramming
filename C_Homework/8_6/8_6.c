/*8.6����ж������һ���ַ��Ƿ�Ϊ�����ġ�*/
#include<stdio.h>
int main(void)
{
	int lenth(char *p);
	char str[80];
	int a,b,flag=1;
	printf("Input a string: ");scanf("%s",str);
	a=0;b=lenth(str)-1;
	while(b-a>0)
	{
		if(str[a]!=str[b])
		{
			flag=0;
			break;
		}
		a++;
		b--;
	}
	if(flag) printf("YES");
	else printf("NO");
	return 0;
}

/*����ָ��pָ����ַ����ĳ��ȣ�������ֹ����*/
int lenth(char *p)
{
	int count=0;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}
