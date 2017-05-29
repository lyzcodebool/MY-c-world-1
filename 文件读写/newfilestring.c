/*************************************************************************
	> File Name: newfilestring.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 12:32:01 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//字符串文件操作
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    char str[20];
    char *buffer;
    buffer = (char *)malloc(100);

    if((fp = fopen(argv[1], "at+"))== NULL)
    {
        printf("error: the file not exist!");
        exit(1);
    }
    
    printf("请输入字符串：\n");
    scanf("%s", str);
    
    fputs(str, fp);

    rewind(fp);
    buffer =  fgets(buffer, 100, fp);
    /*while((ch = getchar()) != EOF)
    {
        putchar(ch);
    }*/

    printf("%s", buffer);
    fclose(fp);
}
