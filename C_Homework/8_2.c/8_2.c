/*8.2�����в���ָ��Ԫ��*/
#include<stdio.h>
int search(int list[],int n,int x);
int main(void)
{
	int n,x,index,list[10],i;
	printf("Input n: ");scanf("%d",&n);
	printf("Input %d integers: ",n);
	for(i=0;i<n;i++) scanf("%d",&list[i]);
	printf("Input x: ");scanf("%d",&x);
	index=search(list,n,x);
	if(index!=-1) printf("index=%d",index);
	else printf("Not found");
	return 0;
}

/*����Ԫ��x������list�е���С�±꣬�������ڷ���-1*/
int search(int list[],int n,int x)
{
	int i;
	for(i=0;i<n;i++) if(list[i]==x) return i;
	return-1;
}
