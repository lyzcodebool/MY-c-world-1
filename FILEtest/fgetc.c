/*************************************************************************
	> File Name: fgetc.c
	> Author: 
	> Mail: 
	> Created Time: Sun 07 May 2017 04:52:43 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//用main 函数实现文件读写
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if((fp = fopen(argv[1], "a+")) == NULL)
    {
        printf("error: the file <%s> open filded!",argv[1]);
        exit(1);
    }
    
    ch = getchar();
    while(ch != '+')
    {
        fputc(ch, fp);
        ch = getchar();
    }

    rewind(fp);

    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    
}
