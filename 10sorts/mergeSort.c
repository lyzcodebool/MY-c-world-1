/*************************************************************************
	> File Name: mergeSort.c
	> Author: 
	> Mail: 
	> Created Time: Thu 04 May 2017 10:53:18 PM PDT
 ************************************************************************/

#include<stdio.h>
void MergeSort(int l, int r, int n, int a[]);
void Merge(int l, int l1, int r1, int r, int n, int a[]);//l:下界，l1:mid r1：mid+1；r：上界
//归并排序
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

    MergeSort(0, n-1,n,a);
    printf("排序后：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;

}
void Merge(int l, int l1, int r1, int r, int n, int a[])//l:下界，l1:mid r1：mid+1；r：上界
{
    int i, j;
    int temp[n];
    int tmp = 0;
    for(i = l, j = r1; i <= l1 && j <= r;)
    {
        if(a[i] < a[j])
        {
            temp[tmp ++] = a[i++];
        }
        else
        {
            temp[tmp++] = a[j++];
        }
    }

    while(i <= l1)
    {
        temp[tmp ++] = a[i++];
    }
    while(j <= r)
    {
        temp[tmp++] = a[j++];
    }

    tmp = 0;
    for(int i = l; i <= r; ++i)
    {
        a[i] = temp[tmp++];
    }
}

void MergeSort(int l, int r, int n, int a[])
{
    if(l == r)
    return;
    int mid = (l+r)/2;

    MergeSort(l, mid, n, a);
    MergeSort(mid+1, r, n, a);
    Merge(l, mid, mid+1, r, n, a);
}


