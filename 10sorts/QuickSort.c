/*************************************************************************
	> File Name: QuickSort.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2017 07:03:13 PM PDT
 ************************************************************************/

#include<stdio.h>
void QuickSort(int a[], int left, int right);
//快排：
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
    
    QuickSort(a, 0, n -1);
    
    printf("排序后：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void QuickSort(int a[], int left, int right)
{
    if(left >= right)
    {
        return;
    }

    int i = left, j = right;
    int x = a[left];//数组首元素为关键字

    while(i < j)
    {
        while(i < j && a[j] >= x)//从右向左扫描找到第一个比key小的元素
        j--;

        if(i < j)
            a[i++] = a[j];//将分部的首元素与第一个比key小的元素交换

        while(i < j && a[i] <= x)//自作向右找到第一个比key大的数字
            i++;
        if(i < j)
            a[j--] = a[i];
    }
    a[i] = x;
    QuickSort(a,left-1, i - 1);
    QuickSort(a,i+1, right);
}
