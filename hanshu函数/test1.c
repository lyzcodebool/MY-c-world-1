/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2017 06:42:11 PM PDT
 ************************************************************************/

#include<stdio.h>
//n的阶乘
long int Jc(register unsigned int n);
//register寄存器 寄存器离cpu近，所以读取速度很快，只是大多数编译器会忽略，尽管合法

int main()
{
    int n;

    printf("请输入一个正整数：\n");
    scanf("%d", &n);

    printf("这个数的阶乘为：%ld\n", Jc(n));
    return 0;
}

long int Jc(register unsigned int n)
{
    if(n == 0)
    {
        return 1;
    }
   else
    {
        return n*Jc(n - 1);
    }
}
