/*************************************************************************
	> File Name: 1子集和.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Apr 2017 06:50:16 PM PDT
 ************************************************************************/

#include<stdio.h>
#define N 20
void swap(int *a, int *b);
void BackResult(int a[], int n, int k, int m, int i);
int result[N];
int sum = 0;
int k = 0;

int main()
{
    int n, m;

    printf("请输入数组元素个数:\n");
    scanf("%d", &n);
    
    printf("请输入你想要的子集和：\n");
    scanf("%d", &m);

    int a[n];

    printf("请输入数组元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    BackResult(a,n,k,m,i);
}

void BackResult(int a[], int n, int k, int m, int i)
{
    if(sum + a[i] == m)
    {
        result[k++] = a[i];
        for(int j = 0; j < k; ++j)
        {
            printf("第%d个选中的是%d\n", j+1,result[j]);
        }
        printf("*********************\n");

        return;     
    }

    if(i > n)
    {
        return;
    }
    if(sum + a[i] > m)
    {
        return;
    }
    for(int j = i; j < n; ++j)
    {
        result[k ++] = a[j];
        sum += a[j];
        swap(&a[i], &a[j]);

        BackResult(a,n,k,m,i+1);

        swap(&a[i], &a[j]);
        sum -= a[j];
        k--;
    }

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
