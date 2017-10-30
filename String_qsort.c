/**
 *
 * @author Ravi
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int comp(const void *p,const void *q)
{
	const char **l=(const char **)p;
	const char **r=(const char **)q;
	return(strcmp(*l,*r));
}
int main(int argc, char *argv[])
{
	char *a[argc-1];
	for (int i = 1; i < argc; ++i)
	{
		/* code */
		a[i-1]=argv[i];
		printf("%s ",a[i-1]);
	}
	printf("\n");
	qsort(a,sizeof(a)/sizeof(char*),sizeof(char*),comp);
	for (int i = 1; i < argc; ++i)
	{
		/* code */
		printf("%s ",a[i-1]);
	}
	return 0;
}