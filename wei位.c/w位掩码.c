/*************************************************************************
	> File Name: w位掩码.c
	> Author: 
	> Mail: 
	> Created Time: Fri 12 May 2017 01:32:44 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    //int a = 8;
    //printf("%d", 1<<8);

    unsigned long n = 0xB;
    unsigned long result = 0;
    unsigned long result1 = 0;
    result = n << 2;  //相当于 n * 2^2;
    result1 = n >> 2; // 相当于 n / 2^2;
    printf("%ld %ld", result, result1);
  /*  for(int i = 10; i >= 0; i--) //十进制转成二进制；
    {
        printf("%d", (8>>i) & 1);
    }*/
    return 0;
}
