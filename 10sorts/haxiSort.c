/*************************************************************************
	> File Name: haxiSort.c
	> Author: 
	> Mail: 
	> Created Time: Thu 04 May 2017 10:29:31 PM PDT
 ************************************************************************/

#include<stdio.h>
#include"swap.h"
//希尔排序
void InsearchSort(int a[], int n, int len);
void ShellSort(int a[], int len);
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
    
    ShellSort(a, n);

    printf("排序后：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void InsearchSort(int a[], int n, int len)
{
    int index, temp;
   for(int i = n+1; i <= len; ++i)
    {
         index = i;
        temp = a[i];
        while(index > n && temp < a[index - 1])
        {
            swap(&a[index], &a[index - 1]);
            index --;
        }
    }
}

void ShellSort(int a[], int len)
{
    int gab = 3;
    for(int i = gab; i > 0; --i)
    {
        for(int j = 0; j + i < len; ++j)
        {
            InsearchSort(a, j, j + i);
        }
    }
}
