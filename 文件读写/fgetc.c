/*************************************************************************
	> File Name: fgetc.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 02:19:47 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    if((fp = fopen("/home/lyzgit/ZICI/text","rt")) == NULL)
    {
        printf("打开失败！");
        exit(1);
    }

    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }

    fclose(fp);
}
