/*************************************************************************
	> File Name: strlen.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 10:37:00 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

//strlen 源码

int strlen(const char *str)
{
    assert(*str != '\0');
    const char *cp = str;
    while(*cp ++);
    return (cp - str - 1);
}

int main()
{
    char str[] = "abcdef";
    printf("%d\n", strlen(str));
    return 0;
}
