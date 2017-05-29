/*************************************************************************
	> File Name: beibao.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 05:24:43 AM PDT
 ************************************************************************/

#include<stdio.h>
#include"beibao.h"
#define N 5
#define M 10

int mcv[N+1][M+1];//定义一个二维表，动态规划的特点，保存价值
Gool wp[N+1] = {{2,6},{2,3},{6,5},{5,4},{4,6}};//物品详细属性

int MaxCount(int a , int b)//比较两个数的大小
{
    return a>=b ? a:b;
}
int  MaxValue()
{
    //当没有物品时，背包内物品价值为0；
    for(int m = 1; m < M; m++)
    mcv[0][m] = 0;

    for(int n = 1; n < N; ++n)
    {
        mcv[n][0] = 0;//背包承重量为0，所以背包内价值=0；
        for(int w = 1; w < M; ++w)
        {
            mcv[n][w] = mcv[n-1][w];//没有选择当前
            if(wp[n].w <= w)//选择当前
            {
               mcv[n][w] = MaxCount(mcv[n][w],mcv[n-1][w-wp[n].w]+wp[n].v);
            }
        }
    }
    return mcv[N][M];
}

int main()
{    
    int mv = MaxValue();  

        printf("The max value is:\n ");  
        printf("%d",mv); 
        int remainspace = M;   //输出所选择的物品列表：  
    
     for(int i=N; i>=1; i--)  
    {  
        if (remainspace >= wp[i].w)  
        {  
             if ((mcv[i][remainspace]-mcv[i-1][remainspace-wp[i].w]==wp[i].v))  
             {  
                 printf( "item %d is selected!",i);  
                 remainspace = remainspace - wp[i].w;//如果第i个物品被选择，那么背包剩余容量将减去第i个物品的重量 ;  
             }  
        }  
    }     
}
