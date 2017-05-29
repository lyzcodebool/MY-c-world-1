/*************************************************************************
	> File Name: 4.11.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 03:39:37 AM PDT
 ************************************************************************/

#include<stdio.h>

void Primedec(int m)
{
    int k = 2;
    while(k <= m)
    {
        if(0 == m % k)
        {
            printf("%d ",k);
            m = m / k;
        }
        else
        k ++;
    }
}

int main()
{
    int n; 

    printf("请输入一个整数：\n");
    scanf("%d",&n);
    
    Primedec(n);

    return 0;
}
