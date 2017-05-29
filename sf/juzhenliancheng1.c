/*************************************************************************
	> File Name: juzhenliancheng1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 11:09:54 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define M 7

int BestCount(int n, int *m[], int *s[], int p[]);
void BestBack(int i, int j, int *s[]);

//矩阵连乘：动态规划迭代版
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

    int n = BestCount(6,m,s,p); 
    printf("最少计算次数:%d\n",n);

    printf("矩阵最优计算次序：\n");
    BestBack(1,6,s);
}

//求解最优计算次数
int BestCount(int n, int *m[], int *s[], int p[])
{
    int i, j;
    for( i = 1; i <= n; ++i)
        m[i][i] = 0;
     for(int r = 2; r <= n; ++r)
     {
        for( i = 1; i <= n - r + 1; ++i)
        {
            j = i + r -1;
            m[i][j] = m[i+1][j] + p[i - 1] * p[i] * p[j];
            s[i][j] = i;
            for(int k = i + 1; k < j; ++k)
            {
                int t = m[i][k] + m[k+1][j] + p[i - 1] * p[k] * p[j];
                if(t < m[i][j])
                {
                    m[i][j] = t;
                    s[i][j] = k;
                }
            }
        }
    }
    return m[1][6];
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
