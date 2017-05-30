/*************************************************************************
	> File Name: strcat.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 07:34:32 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
char *strcat(char *src, const char *dst);

char *strncat(char *src, const char *dst, int count)//按照指定个数拼接字符串
{
    char *temp = src;
    assert(NULL != src && NULL != dst);

    while(*src++);

    while((count--)&&(*src++ = *dst ++));
    *src = '\0';
    return temp;
}
int main()
{
    char src[20] = "abcd";
    char *dst = "efgh";
   // strncat(src, dst, 3);
//    printf("%s\n", strncat(src, dst, 4));
    printf("%s", strcat(src, dst));
}

char *strcat(char *src, const char *dst)// 拼接两个字符串
{
    char *temp = src;
    assert(NULL != src && NULL != dst);
    
    while(*src)
    {
        src++;
    }

    while(*src++ = *dst++);

    return temp;
}
