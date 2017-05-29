/*************************************************************************
	> File Name: InseartSort.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2017 06:48:00 PM PDT
 ************************************************************************/

#include<stdio.h>
#include"swap.h"
//插入排序：
void InseartSort(int a[], int n);
int main()
{   
    int n;

    printf("请输入数组长度：\n");
    scanf("%d", &n);

    int a[n];
    printf("请输入数组元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    InseartSort(a, n);

    printf("排序后：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void InseartSort(int a[], int n)
{
    int temp, index;
    int i = 0;
    for(i = i + 1; i < n; ++i)
    {
         index = i, temp = a[i];
        while(index > 0 && temp < a[index-1])
        {
            swap(&a[index], &a[index -1]);
            index--;
        }
    }
}
