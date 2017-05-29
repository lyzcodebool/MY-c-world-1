/*************************************************************************
	> File Name: strncat.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 11:13:00 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

//按照指定字符个数拼接字符串

char *strncat(char *src, const char *dst, int count)
{
    assert(NULL != src && NULL != dst);

    char *temp = src;

    while(*src)
    {
        src++;
    }

    while((count--) && (*src++ = *dst++));
    *src = '\0';

    return temp;
}

int main()
{
    char src[20] = "abcd";
    char dst[] = "efghijklmn";

    printf("%s\n", strncat(src, dst, 4));

    return 0;
}
