/*************************************************************************
	> File Name: 4.2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 05:04:24 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    int n = 0;
    printf("请输入一个三位数：\n");
    scanf("%d",&n);
    int m = n/100;
    int l = (n%100)/10;
    int k = n % 10;
    int a = m*m*m;
    int b = l*l*l;
    int c = k*k*k;

    if(n == (a+b+c))
        printf("该数是水仙花数！");
    else
         printf("不是水仙花数！");
    return 0;
}
