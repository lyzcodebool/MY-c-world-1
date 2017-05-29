/*************************************************************************
	> File Name: juzhenliancheng0.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Apr 2017 07:17:08 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//矩阵连乘备忘录递归版

int MeroizedMatrixChain(int n, int *m[], int *s[], int *p);
int LookupChain(int i, int j, int *m[], int *s[], int *p);
void BestBack(int i, int j, int *s[]);
int main()
{
    int p[7] = {30, 35, 15, 5, 10, 20, 25};
    int **m,**s;
    int len = 7, c = 5;

    printf("请输入数组长度：\n");
   // scanf("%d%d",&len,&c);

    m = (int **)malloc(sizeof(int *)*len);
    for(int j = 0; j < 7; ++j)
    {
        m[j] = (int *)malloc(sizeof(int) * 7);
    }
    s = (int **)malloc(sizeof(int *)*len);
    for(int j = 0; j < 7; ++j)
    {
        s[j] = (int *)malloc(sizeof(int) *7);
    }

    int n = MeroizedMatrixChain(6,m,s,p);
    printf("最少计算次数:%d\n",n);

    printf("矩阵最优计算次序：\n");
    BestBack(1,6,s);
}

int MeroizedMatrixChain(int n, int *m[], int *s[], int *p)
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            m[i][j] = 0;
        }
    }
    return LookupChain(1,n,m,s,p);
}

int LookupChain(int i, int j, int *m[], int *s[], int *p)
{
    if(m[i][j] > 0)
    {
        return m[i][j];
    }

    if(i == j)
    return 0;

    int u = LookupChain(i, i, m, s, p) + LookupChain(i+1, j, m, s, p) + p[i - 1] * p[i] * p[j];
    s[i][j] = i;
    for(int k = i + 1; k < j; ++k)
    {
        int t = LookupChain(i, k, m, s, p) + LookupChain(k + 1, j, m, s, p) + p[i-1] * p[k] * p[j];
        if(t < u)
        {
            u = t;
            s[i][j] = k;
        }
    }

    m[i][j] = u;
    return u;
}

//构造最优解
void BestBack(int i, int j, int *s[])
{
    if(i == j)
    return;

    BestBack(i, s[i][j],s);
    BestBack(s[i][j]+1,j,s);

    printf("Multiply A: ");
    printf("%d, %d",i,s[i][j]);
    
    printf(" and A:");
    printf("%d, %d \n",(s[i][j]+1),j);
}
