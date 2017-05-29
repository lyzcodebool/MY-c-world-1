/*************************************************************************
	> File Name: z正整数模.c
	> Author: 
	> Mail: 
	> Created Time: Fri 12 May 2017 04:54:09 AM PDT
 ************************************************************************/

#include<stdio.h>
//对正整数模的运算(条件限制 ：非负数)
int main()
{
    int n, x;
    printf("请输入一个正整数：\n");
    scanf("%d", &n);

    printf("请输入你想求2的多少次方：\n");
    scanf("%d", &x);

    //求这个正整数乘以2^x次方；
    printf("%d 的 2^%d 倍为： %d\n\n", n, x, (n << x));

    //求这个正整数除以2^x次方
    printf("%d 除以 2^%d 为： %d\n", n, x, (n >> x));


    return 0;
}
