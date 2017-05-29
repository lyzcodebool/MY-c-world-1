/*************************************************************************
	> File Name: 5.19.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 07:30:31 PM PDT
 ************************************************************************/

#include<stdio.h>
//十进制数转成二进制数存入数组
int main()
{
    int n;
    int a[8] = {0};

    printf("请输入一个整数：\n");
    scanf("%d", &n);

    for(int i = 0; i < 8; ++i)
    {
        a[i] = ((n >> i)&1);
    }
    for(int i = 7; i >= 0; --i)
    {
        printf("%d", a[i]);
    }
    return 0;
}
