/*************************************************************************
	> File Name: tanxin.c
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Apr 2017 05:19:45 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
#define M 100

void GreedSelect(int s[], int f[], int n)//n代表数组长度
{//非递归方法
    bool A[n];
     A[0] = true;
    int j = 0;
    for(int i = 1; i < n; ++i)
    {
        if(s[i] >= f[j])
        { 
            printf("%d  ",j+1);
            A[i] = true;
            j = i;
        }
        else
        A[i] = false;
    }
    printf("%d",j+1);
 printf("\n");
}

void GreedSelect2(int s[], int f[], int B[], int i,int n, int k)//n代表数组长度
{//递归方法
    int m = i+1;
    int j = k;
    while((m < n) && (s[m] <= f[i]) && (m!=0))
        m++;
    if(m < n)
    {   
        B[j] = m+1;
        printf("%d ", B[j]);
        j++;
        GreedSelect2(s, f, B, m, n, j);
    }
 //printf("%d",B[j]);
}

int main()
{
    int n;
    int s[M], f[M];//分别存储活动开始和结束时间

    printf("请输入活动数目：\n");
    scanf("%d",&n);
    printf("请分别输入活动的开始和结束时间：\n");

    for(int i = 0; i < n; ++i)
    {
        scanf("%d%d",&s[i],&f[i]);    
    }

    printf("活动开始和结束时间情况如下：\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ",s[i]);
    }

    printf("\n");

    for(int i = 0; i < n; ++i)
    {
        printf("%d ",f[i]);
    }
    printf("\n");

   GreedSelect(s,f,n);//第一种方法的调用方法
    
    int B[M];
    // B[0] = 1;
    // printf("%d",B[0]);
    GreedSelect2(s,f,B,0,n+1,0);
    return 0;
}
