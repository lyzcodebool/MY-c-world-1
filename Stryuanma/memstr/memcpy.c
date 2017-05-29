/*************************************************************************
	> File Name: memcpy.c
	> Author: 
	> Mail: 
	> Created Time: Wed 10 May 2017 08:27:16 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>

//copy指定字符串
void *my_memcpy(void *dst, const void *src, int count);
int main()
{
    char a[100];
    char *p; 
    p = (char *)my_memcpy(a,"hello world!", 12);
    *(p + 12) = '\0';
    puts(a);

    return 0;
}

void *my_memcpy(void *dst, const void *src, int count)
{
    assert(dst != NULL && src != NULL);
    unsigned char *p = (unsigned char *) dst;
    unsigned char *q = (unsigned char *) src;

    while(count--)
    {
        *p++ = *q++;
    }

    return dst;
}
