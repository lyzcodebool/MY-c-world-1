/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 06:16:29 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>


size_t strlen_b(const char *str)
{
    const char *cp = str;
    while(*cp ++);
    return (cp - str - 1);
}

unsigned int strlen(const char *str)
{
    assert(*str != '\0');
    unsigned int len;

    while((*str++) != '\0')//*str先取str指向的内容，然后把str地址++；
    {
        len ++;
    }
    return len;
}
int main()
{
    char a[] = "abcd";
   // strlen_b(a);
    printf("%d ", strlen_b(a));
    printf("%", strlen(a));
    return 0;
}
