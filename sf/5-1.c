/*************************************************************************
	> File Name: 5-1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 24 Apr 2017 04:00:10 AM PDT
 ************************************************************************/

#include<stdio.h>
//回溯法  // 需要修改，露情况
void Select(int a[], int len, int sum, int m[], int k, int p);
int main()
{
    int n, c, count;
    printf("请输入正整数集合的元素个数：\n");
    scanf("%d", &count);

    printf("请输入你想得到的子集和：\n");
    scanf("%d", &c);

    int a[count];

    printf("请输入一个正整数集合：\n");

    for(int i = 0; i < count; ++i)
    {
        scanf("%d", &a[i]);
    }
    int m[20] = {0};
    int k = 0, sum = 0, p = 0;
    Select(a,count,sum,m,k,p);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Select(int a[], int len, int sum, int m[], int k, int p)
{
 /*   int i;
    for( i = p; i < len; ++i)
    {
        sum += a[i];
        if(sum < 10)
        {
            m[k++] = a[i];
        }

        else if(sum > 10)
        {
            sum -= a[i];           
        }
        else 
        {
            m[k ++] = a[i];
            for(int j = 0; j < k; ++j)
            {
                printf("\n选出来的第%d个数字是：%d\n", j+1, m[j]);
            }
            break;
        }
    }  
    i++;
    if(i >= len)
        { 
           // swap(&a[0], &a[p+1]);
            sum = 0;
            for(int j = 0; j < k; ++j)
            {
                m[j] = 0;
            }
            k = 0;
            Select(a,len,sum,m,k,p+1);
    }*/

    int i = p;
    if(sum == 10)
    {
        m[k++] = a[i];
        for(int j = 0; j < k; ++j)
        {
            printf("%d", m[j]);
        }
        return;
    }

    if(i > len)
    {
        return;
    }

    if(sum+a[i] > 10)
    {
        return;
    }

    for(int j = j; j < len; ++i)
    {
        m[k++] = a[j];
        sum += a[j];
        swap(&a[i], &a[j]);
        Select(a,len,sum,m,k,p+1);
        swap(&a[i], &a[j]);
        sum -= a[j];
        k--;
    }
}

