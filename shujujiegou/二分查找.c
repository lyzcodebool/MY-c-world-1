/*************************************************************************
	> File Name: 二分查找.c
	> Author: 
	> Mail: 
	> Created Time: Fri 12 May 2017 11:16:43 PM PDT
 ************************************************************************/

#include<stdio.h>
//二分查找, 提前要排序
int SerectArr(int a[], int low, int high, int key);
int main()
{
    int a[] = {12, 34, 45, 67, 78, 89, 92};
    int len = sizeof(a)/sizeof(int);
    
    int n;

    printf("原数组：\n");
    for(int i= 0; i < len; ++i)
    {
        printf("%d ",a[i]);
    }

    putchar(10);

    printf("请输入你要查询的数字:\n");
    scanf("%d", &n);

    int m = SerectArr(a, 0, len, n);

    printf("你查询的元素是第 %d 个！\n", m + 1);
}

int SerectArr(int a[], int low, int high, int key)
{
    //int mid = (low + high) / 2;

    if(high < low)
    {
        return -1;
    }
    int mid = (low + high) / 2;

    if(key == a[mid])
    {
        return mid;
    }
 
    if(key < a[mid])
    {
        return SerectArr(a, low, mid-1, key);
    }
    else
    {
        return SerectArr(a, mid + 1, high, key);
    }
}
