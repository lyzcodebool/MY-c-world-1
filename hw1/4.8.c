/*************************************************************************
	> File Name: 4.8.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 08:08:43 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n, m;

    printf("请输入一个整数：\n");
    scanf("%d",&n);

    printf("请输入你想求得的次方：\n");
    scanf("%d",&m);

    int i = 1,k = 1,s = 0; 
    while(i <= m)
    {
        s = n*k;
        k = s;
        i++;
    }
    printf("x^%d = %d",m,s);
}
