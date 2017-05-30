/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 11:13:05 PM PDT
 ************************************************************************/

#include<stdio.h>
int main(int argc, char *argv[])//argc:记录输入的字符串的个数,*argv[]输入的字符串
{
    for(int i = 0; i < argc; ++i)
    {
    printf("%s ", argv[i]);
    }
    return 0;
}
