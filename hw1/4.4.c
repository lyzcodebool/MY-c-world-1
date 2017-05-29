/*************************************************************************
	> File Name: 4.4.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 06:03:43 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void PUT(char str)
{
    int n, i = 0;
    printf("请输入你想要重复打印的次数：\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%c",str);
        i++;
    }
}
int main()
{
    char c;
    printf("请输入你想打印的字符串：\n");
    c = getchar();
    PUT(c);
    return 0;
}
