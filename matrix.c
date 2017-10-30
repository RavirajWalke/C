/**
 *
 * @author Ravi
 */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	/* code */
	int n,m,i,j;
	m=atoi(argv[1]);
	n=atoi(argv[2]);
	if(argc!=m*n+3)
		printf("error\n");
	int a[m][n];
	int k=3;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=atoi(argv[k++]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}