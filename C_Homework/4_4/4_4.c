/*4.4��m��n֮�����������*/
#include<stdio.h>
int main(void)
{
    int m,n,i,j,flag,count=0;
	printf("Input m: ");scanf("%d",&m);
	printf("Input n: ");scanf("%d",&n);
	if(m<=1) m=2;//2����С������
	for(i=m;i<=n;i++)
	{
		flag=-1;
		for(j=2;j<=i/2;j++)
		{
			if (flag==1) break;
			else 
			{
				if(i%j==0) flag=1;
			}
			
		}
		if (flag==-1 )
		{
			count++;
			if (count!=0 && count%6==0) printf("%4d\n",i);
			else printf("%4d",i);
	        
		}
	}
	return 0;
}

