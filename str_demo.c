#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    char *x;
    gets(s1);
    gets(s2);
    x=strstr(s1,s2);
    if(x==NULL)
    printf("-1");
    else
    printf("%s",x);
    return 0;
}