#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "COVID19";
    int i;
    for(i=0; i<strlen(str); i++)
        printf("%s\n", str++);
    return 0;
}