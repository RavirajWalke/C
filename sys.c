#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char s[100];
	while(1)
	{
		printf("Enter command to execute\n");
		gets(s);
		if(strcmp(s,"exit")==0)
			break;
		system(s);

	}
	return 0;
}