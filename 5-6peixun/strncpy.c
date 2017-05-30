/*************************************************************************
	> File Name: strncpy.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 08:23:35 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
//按照指定个数复制字符串
char *strncpy(char *src, const char *dst, int count)
{
    assert(NULL != src && NULL != dst);

    char *temp = src;
    while((count --) && (*src ++ = *dst++));
    *src = '\0';

    return temp;
}

int main()
{
    char src[20] = "abcdef";
    char *dst = "gfd";

    printf("%s", strncpy(src, dst, 3));
    return 0;
}
