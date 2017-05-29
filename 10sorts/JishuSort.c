/*************************************************************************
	> File Name: JishuSort.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 12:47:51 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
//计数排序
#define M 100
int main()
{
    int count[M];
    int a[] = {12, 23, 2, 12, 11, 3, 5, 56, 78, 45, 12};
    int len = sizeof(a)/sizeof(int);

    memset(count, 0, sizeof(count));
    for(int i = 0; i < len; ++i)
    {
        count[a[i]] ++;
    }

    for(int j = 0; j < M; ++j)
    {
        for(int k = 0; k < count[j]; ++k)
        {
            printf("%d ", j);
        }
    }
    return 0;
}
