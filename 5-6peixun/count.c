/*************************************************************************
	> File Name: count.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 08:46:20 PM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个数字：\n");
    scanf("%d", &n);
    int min = 3, max = 5;

    int count = 0;

    while(n)
    {
        count ++;   
        n = n/10;
    }
    count ++;

    if(count >= min && count <= max)
    {
        printf("true!");   
    }
    else
    {
        printf("flase!");
    }
    return 0;
}
