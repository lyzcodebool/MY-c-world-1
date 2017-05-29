/*************************************************************************
	> File Name: wchar_t.c
	> Author: 
	> Mail: 
	> Created Time: Mon 08 May 2017 02:28:38 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stddef.h>
int test(char *s)
{
    if(s == NULL)
    {
        fprintf(stderr, "%s: recrived null pointer argument\n", __func__);
        return -1;
    }
}
int main()
{
    char *s = "";
    int x = test(NULL);
    printf("%d", x);
    return 0;
}
