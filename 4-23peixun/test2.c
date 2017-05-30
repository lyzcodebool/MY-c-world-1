/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2017 10:00:09 AM PDT
 ************************************************************************/

#include<stdio.h>
//#include<string.h>
int strlen(char str[]);

int main()
{
    char  str[20] = "\0";
    printf("%d", strlen(str));
}

int strlen(char str[])
{
    if(NULL != str)
    {
        int i = 0;
        while('\0' != str[i])
        {
            ++i;
        }
        return i;
    }
    else 
    {
        return 0;
    }
}
