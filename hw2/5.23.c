/*************************************************************************
	> File Name: 5.23.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 09:04:31 PM PDT
 ************************************************************************/

#include<stdio.h>
//字母转换
#define N 20
int main()
{
    char str[N];//转换前
    char strtrs[N];//转换后
    int n;

    printf("请输入密文长度：\n");
    scanf("%d", &n);
    
    printf("请输入明文：\n");
    for(int i = 0; i < n+1; ++i)
    {
    //    str[i] = getchar();
        scanf("%c", &str[i]);
    }

    printf("明文：\n");
    for(int i = 0; i < n+1; ++i)
    {
        printf("%c",str[i]);
    }

    for(int j = 0; j < n+1; ++j)
    {
        strtrs[j] = str[j] + 3;
    }
    putchar(10);
    printf("密文：\n");
    for(int i = 0; i < n+1; ++i)
    {
        printf("%c", strtrs[i]);
    }
    return 0;
}
    /*char a = 'a';
    char b = 'a' + 3;
    printf("%c", b);*/

