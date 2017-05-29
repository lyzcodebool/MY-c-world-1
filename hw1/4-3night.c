/*************************************************************************
	> File Name: 4-3night.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 06:43:16 AM PDT
 ************************************************************************/

#include<stdio.h>
//斐波纳切函数；
int main()
{
    int sum1 = 1;
    int sum2 = 1;
    int sum = 2;
    int i = 1;
    for(; i < 20; ++i)
    {
        if(i == 1||i == 2)
        {
            printf("%2d",sum1);
            continue;
        }
        else
           {
            printf("%6d",sum);
            sum2 = sum;//更新当前sum
            sum = sum2 + sum1;
            sum1 = sum2;//存放上一级sum 
        }
    } 
    return 0;
}
