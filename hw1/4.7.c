/*************************************************************************
	> File Name: 4.7.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 07:34:40 AM PDT
 ************************************************************************/

#include<stdio.h>
int  huiwenshu(int n)
{
    int k = 0;
    int p = n;
    while(n != 0)
    {
      k = k*10 + n%10;
        n /=10;
    }
    if(k == p)
    return 1;
    else
    return 0;
}
int main()
{
    int n;

    printf("请输入一个整数：\n");
    scanf("%d",&n);
    
    int m = huiwenshu(n);

    if(m == 1)
    printf("是回文数！");
    else
    printf("不是回文数！");
}
