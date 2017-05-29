/*************************************************************************
	> File Name: fcopy.c
	> Author: 
	> Mail: 
	> Created Time: Sat 06 May 2017 01:53:23 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//copy文件的内容到另外一个文件
int main(int argc, char *argv[])
{
    FILE *in, *out;
    char ch;
    if(argc != 3)
    {
        printf("input error!");
    }

    if((in = fopen(argv[1], "r"))== NULL)
    {
        printf("error: <%s> open filded!", argv[1]);
        exit(1);
    }
    
    if((out = fopen(argv[2], "w"))== NULL)
    {
        printf("error: <%s> open filded!", argv[2]); 
        exit(1);
    }

    ch = fgetc(in);
    while(ch != EOF)
    {
        fputc(ch, out);
        ch = fgetc(in);
    }

    fclose(in);
    fclose(out);
}
