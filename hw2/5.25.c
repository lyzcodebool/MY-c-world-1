/*************************************************************************
	> File Name: 5.27.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 09:33:35 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//统计票数
int main()
{
    int *count;
    int len;
    int out = 0;
    int *tongji;

    printf("请输入选票数：\n");
    scanf("%d", &len);

    count = (int *)malloc(sizeof(int) * len);
    tongji = (int *)malloc(sizeof(int) * len);

    printf("请输入选票：\n");
    for(int i = 0; i < len; ++i)
    {
        scanf("%d", &count[i]);
    }
    for(int k = 0; k < len; ++k)//初始化统计数组
    {
        tongji[k] = 0;
    }

    printf("选票情况：\n");
    for(int i = 0; i < len; ++i)
    {
        printf("%d ", count[i]);
    }
    putchar(10);
    int m = 1;
    while(m <= 5)
    {
        for(int j = 0; j < len; ++j)
        {
             if(count[j] == m)
            {
              tongji[m] ++;  
            }
        }
        m++;
    }
   for(int j = 0; j < len; ++j)
    {  
       if(count[j] > 5 || count[j] <= 0)
        {
            out ++;
        }
    }
    printf("1～5号候选人对应所得票数如下：\n");
    for(int i = 1; i <= 5; ++i)
    {
        printf("%d ", tongji[i]);
    }
    printf("\n作废票数：\n%d",out);
    return 0;
}
