//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int isPalindrome(char s[])
//{
//    int len=strlen(s);
//    int j=len-1;
//    for(int i=0;i<len/2;i++)
//    {
//        if(s[i]==s[j--])
//        {
//            continue;
//        }
//        else
//        {
//        return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    char start[1000],end[1000];
//    scanf("%s%s",start,end);
//    strcat(start,"000000");
//    strcat(end,"235959");
//    int i=atoi(start),len=atoi(end),count=0;
//    printf("%d ",count);
//    for(;i<len;i++)
//    {
//        char s[1000];
//        sprintf(s,"%d",i);
//        printf("%d ",i);
//        if(isPalindrome(s))
//        {
//            count++;
//        }
//    }
//    printf("%d",count);
//}
#include<stdio.h>
int main()
{
    int num=1000000;
    for(int i=0;i<num;i++)
    {
        printf("%d",i);
    }
}
