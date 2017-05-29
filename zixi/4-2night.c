/*************************************************************************
	> File Name: 4-2night.c
	> Author: 
	> Mail: 
	> Created Time: Sun 02 Apr 2017 04:50:49 AM PDT
 ************************************************************************/

#include<stdio.h>
/*//二进制普通方法；
int main()
{
    int a[30], i = 0, x , y;
    printf("请输入一个十进制整数：\n");
    scanf("%d",&x);
    while(x != 0)
    {
        y = x%2;
        a[i] = y;
        i++;
        x = x / 2 ;
    }
    i--;
    for(; i >= 0 ; --i)
    {
        printf("%d",a[i]);
    }
    return 0 ;
}*/
/*int main()
{
    int x ,i; 
    printf("请输入一个十进制整数：\n");
    scanf("%d",&x);
    for(i = 31; i >= 0 ; --i)
    {
        printf("%d",x>>i&1);
    }
    return 0;
}*/
int main()
{
    int i = 0 , sum = 0;
    while(i <= 100)
    {
        i = 0;
         sum = (i++);
    }
    printf("%d",sum);
}

