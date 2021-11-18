#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char start[1000],end[1000];
    scanf("%s%s",start,end);
    strcat(start,"000000");
    strcat(end,"235959");
    printf("%s %s",start,end);
    int i=atoi(start),len=atoi(end);
    for(;i<len;i++)
    {
        printf("%d ",i);
    }
}