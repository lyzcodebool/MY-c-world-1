/*************************************************************************
	> File Name: 1最长公共字串.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2017 04:49:03 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
//迭代法求最长公共字串问题
int LCSLength(int m, int n, char *x, char *y, int **c, int **b);
void LCS(int i, int j, char *x, int **b);

int main()
{
    int **c;
    int **b;
    char x[N] = "abcdefghjk";
    char y[N] = "abcdejhkjk";
    int m = strlen(x);
    int n = strlen(y);
    
    //创建动态二维数组
    c = (int **)malloc(sizeof(int *)*m);
    for(int i = 0; i < n; ++i)
    {
        c[i] = (int *)malloc(sizeof(int)*n);
    }
    b = (int **)malloc(sizeof(int *)*m);
    for(int i = 0; i < n; ++i)
    {
        b[i] = (int *)malloc(sizeof(int)*n);
    }
    LCSLength(m, n, x, y, c, b);
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%3d", c[i][j]);
        }
        putchar(10);
    }
    LCS(m, n, x, b);
    return 0;
}
//计算最优值
int LCSLength(int m, int n, char *x, char *y, int **c, int **b)
{
    int i, j;
    for(i = 1; i <= m; ++i)
    {
        c[i][0] = 0;
    }
    for(j = 1; j <= n; ++j)
    {
        c[0][j] = 0;
    }
    for(i = 1; i <= m; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            if(x[i] == y[j])
            {
                c[i][j] = c[i-1][j-1] + 1;
                b[i][j] = 1;
            }
            else if(c[i-1][j] >= c[i][j-1])
            {
                c[i][j] = c[i-1][j];
                b[i][j] = 2;
            }
            else
            {
                c[i][j] = c[i][j-1];
                b[i][j] = 3;
            }
        }
    }
}

//构造最长公共子序列
void LCS(int i, int j, char *x, int **b)
{
    if(i == 0 || j == 0)
    {
        return;
    }
    if(b[i][j] == 1)
    {
        LCS(i-1, j-1, x, b);
        printf("%c", x[i]);
    }
    else if(b[i][j] == 2)
    {
        LCS(i-1, j, x, b);
    }
    else
    {
        LCS(i, j-1, x, b);
    }
}
