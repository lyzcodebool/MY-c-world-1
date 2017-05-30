/*************************************************************************
	> File Name: strcpy.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 08:05:27 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
char *strcpy(char *src, const char *dst)
{
    assert(NULL != src && NULL != dst);
    
    char *temp = src;
    while(*src++ = *dst++);
    
    return temp;
}

int main()
{
    char str[20] = "abcdef";
    char *dst = "cdef";

    printf("%s", strcpy(str, dst));
    return 0;
}
