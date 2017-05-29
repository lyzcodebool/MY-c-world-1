/*************************************************************************
	> File Name: 4.3.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 05:31:08 AM PDT
 ************************************************************************/

#include<stdio.h>

int max(int a, int b)
{
    int temp;
    if(a < b)
        temp = a;
        a = b;
        b = temp;
}

int main()
{
     int n, m, b , t;
     printf("请输入两个数字：\n");
     scanf("%d %d",&n,&m);
        max(n, m);
   // int b = n%m;
    int a = n, c = m;
    while(m!= 0)
    {   
        t = n % m;
        n = m;
        m = t;
    }
    printf("最大公约数为：%d",n);
    printf("最大公倍数为：%d",a*c/n);
}
