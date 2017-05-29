/*************************************************************************
	> File Name: fgets.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 02:26:51 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char str[15];

    if((fp = fopen("/home/lyzgit/ZICI/text","rt")) == NULL)
    {
        printf("打开失败！");
        exit(1);
    }
    
    fgets(str,15,fp);//用户指定的read；
    printf("%s", str);
    putchar(10);
}
