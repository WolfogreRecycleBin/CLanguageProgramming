/*7.5计算矩阵中部分数据之和*/
#include<stdio.h>
int main(void)
{
	int matrix[100][100];
	int rank,i,j,sum=0;
	printf("Input n: ");scanf("%d",&rank);
	printf("Input array:\n");
	for(i=0;i<rank;i++)
		for(j=0;j<rank;j++)
			scanf("%d",&matrix[i][j]);
	for(i=0;i<rank;i++)
		for(j=0;j<rank;j++)
			if((i!=(rank-1))&&(j!=(rank-1))&&((i+j)!=rank-1)) sum+=matrix[i][j];
	printf("sum=%d",sum);
	return 0;
}
