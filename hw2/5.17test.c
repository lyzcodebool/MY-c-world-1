/*************************************************************************
	> File Name: 5.17test.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 05:33:49 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
    int *a;
    int len, n;

    printf("原始数列长度：");
    scanf("%d", &len);

    a = (int *)malloc(sizeof(int)*N);

    printf("请输入有序数列：\n");
    for(int i = 0; i < len; ++i)
    {
        scanf("%d", &a[i]);
    }

    printf("请输入你要插入几个元素：\n");
    scanf("%d", &n);

 //   a = (int *)malloc(sizeof(int)*(len+n));
    
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[len+i]);
    }

    //冒泡排序
    int arrlen = len + n;
    for(int i = 0; i < arrlen-1; ++i)
    {
        for(int j = 0; j < (arrlen - i -1); ++j)
        {
            if(a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("插入以后数组为：\n");
    for(int i = 0; i < arrlen; ++i)
    {
        printf("%d", a[i]);
    }
    return 0;
}
   /* int arrlen = len + n;
    int m, temp;
    printf("请输入你要插入的元素：\n");
    
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &m);
        for(int j = 0; j < len; ++j)
        {
            if(m < a[j])
            {
                temp = j;
                break;
            }
        }   
        for(int i = len; i > temp; --i)
        {
            a[i] = a[i-1];
        }
        a[temp] = m;
    }
    printf("插入后的数组:\n");
    for(int i = 0; i < arrlen; ++i)
    {
        printf("%d", a[i]);
    }
    return 0;*/
