/*8.2数组中查找指定元素*/
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

/*返回元素x在数组list中的最小下标，若不存在返回-1*/
int search(int list[],int n,int x)
{
	int i;
	for(i=0;i<n;i++) if(list[i]==x) return i;
	return-1;
}
