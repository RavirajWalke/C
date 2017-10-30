#include<stdio.h>
int main(int argc, char const *argv[])
{
	//printf("%s\n",__FILE__);
	FILE *fp=fopen(__FILE__,"r");
	char c;
	do
	{
		c=fgetc(fp);
		putchar(c);
	}
	while(c!=EOF);
	fclose(fp);
	return 0;
}