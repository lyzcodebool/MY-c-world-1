/*************************************************************************
	> File Name: sushu.c
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 08:33:35 AM PDT
 ************************************************************************/

#include<stdio.h>
int is_proim(int n)
{
    if(n <= 1)
    {
        return 0;
    }
    for(int i = 2; i*i <= n; ++i)
    {
        if(n%i == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int t = 1 , n = 0 ;
    printf("1000以内的素数：\n");
    for(int i = 2; i < 1000; ++i)
    {
        if(is_proim(i))
        {
            t++;
            n++;
            printf("%d ",i);
            if(t > 10)
            {
                printf("\n");
                t = 1;
            }
        }
    }
    printf("1000以内的素数有%d个",n);
}
