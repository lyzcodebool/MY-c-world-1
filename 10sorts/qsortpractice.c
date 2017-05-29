/*************************************************************************
	> File Name: qsortpractice.c
	> Author: 
	> Mail: 
	> Created Time: Fri 12 May 2017 01:08:41 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int my_cmp(const void *p, const void *q);
int main()
{
    int n;
    printf("请输入要排序的数组长度：\n");
    scanf("%d", &n);
    int a[n];

    printf("请输入数组元素：\n");

    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), my_cmp);

    printf("排序后：\n");

    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

int my_cmp(const void *p, const void *q)
{
    int x = *(int *)p;
    int y = *(int *)q;
    
    return (x < y) ? -1: ((x == y)) ? 0 : 1; 
}
