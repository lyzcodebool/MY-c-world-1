/*************************************************************************
	> File Name: comparefile.c
	> Author: 
	> Mail: 
	> Created Time: Tue 09 May 2017 11:23:24 PM PDT
 ************************************************************************/

#include<stdio.h>
//比较两个文件内容是否相同
int main(int argc, char *argv[])
{
    FILE *fp, *gp;
    char ch, cg;

    if(argc != 3)
    {
        printf("error: input error");
    }
    if((fp = fopen(argv[1], "r+")) == NULL)
    {
        printf("error: the file <%s> open filded!", argv[1]);
    }

    if((gp = fopen(argv[2], "r+")) == NULL)
    {
        printf("error: the file <%s> open filded!", argv[2]);
    }

    ch = fgetc(fp);
    cg = fgetc(gp);

    while(ch != EOF || cg != EOF)
    {
        if(ch != cg)
        {
            printf("not equal!");
            break;
        }
        ch = fgetc(fp);
        cg = fgetc(gp);
    }
    if(ch == EOF && cg == EOF)
    {
        printf("compare ok!");
    }

    fclose(fp);
    fclose(gp);
}

