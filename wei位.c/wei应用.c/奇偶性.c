/*************************************************************************
	> File Name: 奇偶性.c
	> Author: 
	> Mail: 
	> Created Time: Fri 12 May 2017 03:21:12 AM PDT
 ************************************************************************/

#include<stdio.h>
int JiOu(int n);
int main()
{
    int n = 52;
    //JiOu(n);
    //printf("%d", JiOu(n));
    if(JiOu(n) == 1)
    {
        printf("奇数！\n");
    }
    else
    {
        printf("偶数！\n");
    }
    return 0;
}

//用位运算判断奇偶性, 判断数字的末尾，末尾为1表示奇数，为0为偶数
int JiOu(int n)
{
    //判断n在不在0～65535之间
   // int x = n & ~(1 << 16)-1;
      //printf("%d", x);//在0 ～ 65535区间内的数字输出原数字，超过的数字不确定，不实用；


    //下面看判断奇偶的位算法
    int x = n & 1;
    return x;
}
