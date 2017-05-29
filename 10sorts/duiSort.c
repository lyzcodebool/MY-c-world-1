/*************************************************************************
	> File Name: duiSort.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2017 07:54:08 PM PDT
 ************************************************************************/

#include<stdio.h>
#include"swap.h"
void HeapAdjust(int a[], int i, int size);
void BuildHeap(int a[], int size);
void HeapSort(int a[], int i, int size);
//堆排序
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

    HeapSort(a,0,n-1);
    printf("排序后：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void HeapAdjust(int a[], int i, int size)
{
    int left = 2*i;//i的左孩子
    int right = 2*i+1;//i的右孩子

    int max = i;
    if(i <= size/2)
    {
    if(left <= size && a[left] > a[max])
    {
        max = left;   
    }
    if(right <= size && a[right] > a[max])
    {
        max = right;
    }

    if(i != max)
    {
        swap(&a[i], &a[max]);
        HeapAdjust(a,max,size);//调整之后的max不满足堆的性质
    }
    }
}

void BuildHeap(int a[], int size)
{
    for(int i = size/2-1; i >= 0; --i)
    {
        HeapAdjust(a, i, size);
    }
}

void HeapSort(int a[], int i, int size)
{
    BuildHeap(a,size);
    for(int i = size-1; i >= 0; --i)
    {
        swap(&a[0], &a[i]);//交换第一个元素和堆顶元素
        HeapAdjust(a, 1, size-1);//继续调整堆顶元素成为大顶堆
    }
}



