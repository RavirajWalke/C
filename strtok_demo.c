#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *token;
	char delim[10];
	gets(str);
	gets(delim);
	for (token = strtok(str,delim); token != NULL; token = strtok(NULL, delim))
	{
 	 	puts(token);
	}
}
