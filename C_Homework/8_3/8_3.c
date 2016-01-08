/*8.3输出其中最长的字符串*/
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

/*返回指针p指向的字符串的长度（不含终止符）*/
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
