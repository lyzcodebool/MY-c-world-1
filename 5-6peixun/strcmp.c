/*************************************************************************
	> File Name: strcmp.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 07:02:35 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

int strcmp(const char *src, const char *dst)
{
    assert(NULL != src && NULL != dst);

    while(*src && *dst && *src == *dst)
    {
        ++src;
        ++dst;
    }
    return (*src - *dst);
}

int main()
{
    char *str = "abcdefg";
    char *dst = "abcfder";

    printf("%d", strcmp(str, dst));
    return 0;
}
