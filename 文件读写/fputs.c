/*************************************************************************
	> File Name: fputs.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 03:57:39 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch, str[20];

    if((fp = fopen("/home/lyzgit/ZICI/text","at+")) == NULL)
    {
        printf("打开失败！");
        exit(1);
    }

    printf("请输入字符串:\n");
    scanf("%s", str);

    fputs(str,fp);

    rewind(fp);

    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }

    printf("\n");
    fclose(fp);
}
