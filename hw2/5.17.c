/*************************************************************************
	> File Name: 5.17.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 04:58:36 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
//插入若干数字且保持有序
int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int len1 = sizeof(a) / sizeof(int);
    int n;

    printf("请输入你想插入几个数字：\n");
    scanf("%d", &n);

    printf("输入要插入的数字：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[len1+i]);      
    }
    
    //冒泡排序
 /*   for(int i = 0; i < (len1+n)-1; ++i)
    {
        for(int j = 0; j <(len1+n-1)-i; ++j)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }*/
    for(int i = 0; i < (len1+n); ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
