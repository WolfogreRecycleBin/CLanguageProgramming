/*9.2ͨѶ¼����*/
#include<stdio.h>
//���������Ϣ�ṹ
struct information
{
	char name[20];
	int birthday;
	char number[20];

};
int main(void)
{
	void sort(struct information *p,int n);
	struct information book[10];
	int n,i;
	printf("Input n: "); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{ 
		printf("Input the name, birthday, number of the %d friend: ", i+1);
		scanf("%s%d%s", &book[i].name, &book[i].birthday, &book[i].number);
	}
	sort(book,n);
	for (i = 0; i < n; i++)
	{
		printf("%s %d %s\n", book[i].name, book[i].birthday, book[i].number);
	}
	return 0;
}

/*������ָ��pָ��ĳ���Ϊn��information��������
����information.birthday����ֵ��С��������*/
void sort(struct information *p,int n)
{
	struct information *i, *j;
	for (i = p; i < p + n-1; i++)
		for (j = i; j < p + n-1; j++)
		if ((*j).birthday > (*(j + 1)).birthday)
		{
			struct information temp;
			temp = *j;
			*j = *(j + 1);
			*(j + 1) = temp;
		}
}