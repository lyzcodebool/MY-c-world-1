/*************************************************************************
	> File Name: 4.9.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 08:19:05 AM PDT
 ************************************************************************/

#include<stdio.h>
int Pdl(int x , int n)
{
    if(0 == n)
    {
       return 1;
    }
    else if(1 == n)
    {
       return x;
    }
    else
    {
        return ((2*n-1)*x-Pdl(x,n-1)-(n-1)*Pdl(x,n-2))/n;
    }
}
int main()
{
    int x, n;
    printf("请输入x和n：\n");
    scanf("%d %d", &x,&n);

    int m = Pdl(x, n);

    printf("%d" ,m);
}
