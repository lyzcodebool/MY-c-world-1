/*************************************************************************
	> File Name: strncpy.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 10:51:49 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
//按照指定个数copy字符串
char *strncpy(char *src, const char *dst, int count)
{
    assert(NULL != src && NULL!= dst);
    
    char *temp = src;

    while((count--) && (*src++ = *dst++));
    *src = '\0';
    
    return temp;
}

int main()
{
    char src[20] = "abcdef";
    char dst[] = "qwert";

    printf("%s\n", strncpy(src, dst, 4));

    return 0;
}
