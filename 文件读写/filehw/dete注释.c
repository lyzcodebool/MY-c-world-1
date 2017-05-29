/*************************************************************************
	> File Name: dete注释.c
	> Author: 
	> Mail: 
	> Created Time: Wed 10 May 2017 01:11:09 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define M 100000

//删除文件中的注释
int main(int argc, char *argv[])
{
    FILE *fp, *cp;
    char str[M] = {'\0'};

    if(argc != 3)
    {
        printf("error: input argc error!");
        exit(1);
    }

    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("error:the file <%s> open filded!",argv[1]);
        exit(1);
    }

    if((cp = fopen(argv[2], "w")) == NULL)
    {
        printf("error:the file <%s> open filded!", argv[2]);
        exit(1);
    }

    int i = 0;
   
    str[0] = fgetc(fp);
    i++;
    while( i < 100 && str[i] != EOF)
    {
        str[i] = fgetc(fp);

        if(str[i - 1] == '/' && str[i] == '/')
        {
            i = i -1;
            while(str[i] != '\n')
            {
                str[i] = ' ';
                fputc(str[i], cp);
                i++;
            }
            str[i] = '\n';
            i++;
        }
        else
        {
            fputc(str[i], cp);
            i++;
        }
    }

    fclose(fp);
    fclose(cp);
}
    /*while(fgets(str, 100, fp) != NULL)
    {
        int i = 0;
    while(i < 100)
    {
        if(str[i] == '/' && str[i - 1] == '/')
        {
            str[i - 1] = ' ';
            str[i] = ' ';
            while(str[i ++] != '\n')
            {
                str[i] = ' ';
            }
            i++;
        }
        
        fputs(str, cp);
        i++;
    }
    }*/
