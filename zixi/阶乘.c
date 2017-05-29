/*************************************************************************
	> File Name: 阶乘.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Apr 2017 12:23:40 PM PDT
 ************************************************************************/

#include<stdio.h>
//20!超出int内存数据存储范围 -2^32 —— 2^32  -2147483648~2147483647
int fun(int n)
{
    if(1 == n)
    return 1;
    return n * fun(n - 1);
}
//计算2的多少阶乘达到最大存储
void func(int n,int count)
{
    //int count = 0;
     if(0 == n%2)
    {
     count ++;
     n /= 2;
     func(n,count);   
    }
    else
    printf("\n%d",count+1);
}
int main()
{
    int n;

    printf("请输入一个数字：\n");
    scanf("%d", &n);
    
    printf("%d! = %d",n,fun(n));
    func(2147483648,0);
    return 0;

}


