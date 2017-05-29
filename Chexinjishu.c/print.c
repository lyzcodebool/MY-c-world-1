/*************************************************************************
	> File Name: print.c
	> Author: 
	> Mail: 
	> Created Time: Mon 08 May 2017 07:10:32 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch, m;
    int n;

    printf("请输入一个数字:\n");
    scanf("%d", &n);

    printf("请输入一个字母：\n");
    scanf("\n%c", &ch);
    printf("%d %c", n, ch);
}
