#include<stdio.h>
#include<stdlib.h>
int comp(const void *p,const void *q)
{
	const int *l=(const int*)p;
	const int *r=(const int*)q;
	return(*l-*r);
}
int main(int argc, char *argv[])
{
	int a[argc-1];
	for (int i = 1; i < argc; i++)
	{
		/* code */
		a[i-1]=atoi(argv[i]);
		//a[i-1]=argv[i];
		printf("%d ",a[i-1] );
	}
	printf("\n");
	qsort(a,sizeof(a)/sizeof(int),sizeof(int),comp);
	for (int i = 1; i < argc; i++)
	{
		/* code */
		printf("%d ",a[i-1] );
	}
	return 0;
}