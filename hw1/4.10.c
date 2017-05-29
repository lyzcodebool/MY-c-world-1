/*************************************************************************
	> File Name: 4.10.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 10:14:45 PM PDT
 ************************************************************************/

#include<stdio.h>

float px(float x, int n)
{   
    if(n==1)
    {
        return x;
    }
    else
    return (x*(1-px(x,n-1)));
}

int main()
{
    float x;
    int n;

    printf("请输入一个整数和你想要的最高次方：\n");
    scanf("%f %d",&x,&n);

    float m = px(x,n);

    printf("%f",m);

    return 0;
}
