/*************************************************************************
	> File Name: fputc.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 02:27:13 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    if((fp = fopen("/home/lyzgit/ZICI/text","at")) == NULL)
    {
        printf("打开文件失败！");
        exit(1);
    }

    printf("请输入你要添加的字符：\n");
    ch = getchar();
    while(ch != '\n')
    {
        fputc(ch,fp);
        ch = getchar();
    }

    rewind(fp);
    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    putchar(10);
    fclose(fp);
}
