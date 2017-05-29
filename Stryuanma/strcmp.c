/*************************************************************************
	> File Name: strcmp.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 10:57:18 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

//判断字符串大小

int strcmp(const char *src, const char *dst)
{
    assert(NULL != src && NULL != dst);
    
    while(*src && *dst && *src++ == *dst++);

    return *src - *dst;
}

int main()
{
    char src[] = "abcdefgh";
    char dst[] = "abcdfgh";

    int count = strcmp(src, dst);

    printf("%d\n", count);
}
