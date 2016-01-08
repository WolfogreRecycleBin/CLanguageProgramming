/*7.6判断是否为上三角矩阵*/
#include<stdio.h>
int main(void)
{
	int matrix[100][100];
	int rank,i,j,flag=1;
	printf("Input n: ");scanf("%d",&rank);
	printf("Input array:\n");
	for(i=0;i<rank;i++)
		for(j=0;j<rank;j++)
			scanf("%d",&matrix[i][j]);
	for(i=0;i<rank;i++)
		for(j=0;j<rank;j++)
			if((i>j)&&(matrix[i][j]!=0)) flag=0;
	if(flag==1) printf("YES");
	else printf("NO");
	return 0;
}
