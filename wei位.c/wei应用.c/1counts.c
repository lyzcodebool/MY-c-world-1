/*************************************************************************
	> File Name: 1counts.c
	> Author: 
	> Mail: 
	> Created Time: Fri 12 May 2017 03:50:52 AM PDT
 ************************************************************************/

#include<stdio.h>
//统计n的二进制形式中1的个数

int  count_one(unsigned  long  n)
{
     // 0xAAAAAAAA，0x55555555分别是以“1位”为单位提取奇偶位 
    n  =  ((n  &   0xAAAAAAAA )  >>   1 )  +  (n  &   0x55555555 );

     // 0xCCCCCCCC，0x33333333分别是以“2位”为单位提取奇偶位 
    n  =  ((n  &   0xCCCCCCCC )  >>   2 )  +  (n  &   0x33333333 );

     // 0xF0F0F0F0，0x0F0F0F0F分别是以“4位”为单位提取奇偶位 
    n  =  ((n  &   0xF0F0F0F0 )  >>   4 )  +  (n  &   0x0F0F0F0F );

     // 0xFF00FF00，0x00FF00FF分别是以“8位”为单位提取奇偶位 
    n  =  ((n  &   0xFF00FF00 )  >>   8 )  +  (n  &   0x00FF00FF );
    
     // 0xFFFF0000，0x0000FFFF分别是以“16位”为单位提取奇偶位 
    n  =  ((n  &   0xFFFF0000 )  >>   16 )  +  (n  &   0x0000FFFF );

     return  n;
}

int main()
{
    int n;
    int count = 0; //朴素方法

    printf("请输入一个正整数：\n");
    scanf("%d", &n);

    printf("这个整数的二进制形式为：\n");
    for(int i = 31; i >= 0; --i)
    {
        printf("%d", (n >> i) & 1);
        if((n >> i) & 1 == 1)
        {
            count += 1;
        }
    }
    printf("这个整数的二进制形式中共有 %d 个 1\n",count);
    printf("这个整数的二进制形式中共有 %d 个 1\n",count_one(n));

    return 0;
}
