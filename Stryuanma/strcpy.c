/*************************************************************************
	> File Name: strcpy.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 10:44:57 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

//copy字符串
char *strcpy(char *src, const char *dst)
{
    assert(NULL != src && NULL != dst);

    char *temp = src;

    while(*src++ = *dst++);

    return temp;
}
int main()
{
    char src[20] = "abcdef";
    char dst[] = "hahahaha";

    printf("%s\n", strcpy(src, dst));
    return 0;
}
