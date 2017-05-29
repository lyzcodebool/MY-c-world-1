/*************************************************************************
	> File Name: maopao.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2017 06:27:43 PM PDT
 ************************************************************************/

#include<stdio.h>
void swap(int *a, int *b);
void BubSort(int a[], int n);
//冒泡：
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

    BubSort(a,n);

    printf("排序后：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void BubSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = 0; j < n-i-1; ++j)
        {
            if(a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
