/*8.3�����������ַ���*/
#include<stdio.h>
int main(void)
{
	char str[5][20];
	int i,maxlenth=-1,maxindex=-1;
	int lenth(char *p);
	printf("Input 5 strings: ");
	for(i=0;i<5;i++) scanf("%s",str[i]);
	for(i=0;i<5;i++) 
	{
		if(lenth(str[i])>maxlenth) 
		{
			maxlenth=lenth(str[i]);
			maxindex=i;
		}
	}
	printf("The longest is: %s",str[maxindex]);
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
