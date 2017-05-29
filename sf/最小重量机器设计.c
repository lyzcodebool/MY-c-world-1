/*************************************************************************
	> File Name: 最小重量机器设计.c
	> Author: 
	> Mail: 
	> Created Time: Sun 07 May 2017 05:15:12 PM PDT
 ************************************************************************/

#include<stdio.h>
/*
 * n 部件个数
 * m 供应商个数
 * d 价格上限
 * 输出最小重量和供应商打印
 */

 int main()
 {
     int n, m, d;

     printf("请输入部件个数：\n");
     scanf("%d", &n);
    
     printf("请输入供应商个数：\n");
     scanf("%d", &m);

     printf("请输入价格上限：\n");
     scanf("%d", &d);
    
     int c[n][m];

     for(int i = 0; i < n; ++i)
     {
         for(int j = 0; j < n; ++j)
         {
             scanf("%d", &c[i][j]);
         }
     }

     int w[n][m];

     for(int i = 0; i < n; ++i)
     {
         for(int j= 0; j < n; ++j)
         {
             scanf("%d", &w[i][j]);
         }:
     }
 }

 void SelectBest(int *c[], int *w[], int n, int m)
 {
     int c = 0; 
     int w = 0;

     for(int i = 0; i < n; ++i)
     {
         for()
     }
 }


