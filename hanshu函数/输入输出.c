/*************************************************************************
	> File Name: 输入输出.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2017 07:52:56 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc == 0)
    {
        printf("无输入！\n");
        exit(1);
    }

    else
    {
        printf("The <%s> now running\n", argv[0]);
        if(argc == 1)
        {
            puts("No arguements received on the command line!");
        }
        else
        {
            puts("The command line arguements:");
            for(int i = 1; i < argc; ++i)
            {
                puts(argv[i]);
            }
        }
    }

    return 0;
}
