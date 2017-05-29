/*************************************************************************
	> File Name: selectSort.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2017 06:36:28 PM PDT
 ************************************************************************/

#include<stdio.h>
#include"swap.h"
void SelectSort(int a[], int n);
//选择排序：
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

    SelectSort(a, n);
    printf("排序后：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void SelectSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        int k = i;
        for(int j = i + 1; j < n; ++j)
        {
            if(a[k] > a[j])
            {
                k = j;
            }

            if(k != i)
            {
                swap(&a[k], &a[j]);
            }
        }
    }
}


