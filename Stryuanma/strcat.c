/*************************************************************************
	> File Name: strcat.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 11:06:48 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

//拼接字符串

char *strcat(char *src, const char *dst)
{
    assert(NULL != src && NULL != dst);

    char *temp = src;

    while(*src)
    {
        src ++;
    }
    while(*src++ = *dst++);

    return temp;
}

int main()
{
    char src[20] = "abcd";
    char dst[] = "efgh";

    printf("%s\n", strcat(src, dst));

    return 0;
}
