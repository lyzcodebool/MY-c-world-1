/*************************************************************************
	> File Name: swap.c
	> Author: 
	> Mail: 
	> Created Time: Thu 11 May 2017 08:29:34 PM PDT
 ************************************************************************/

#include<stdio.h>
void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main()
{
    int a = 3;
    int b = 4;
    swap(&a, &b);
    printf("%d %d",  a, b);
    return 0;
}
