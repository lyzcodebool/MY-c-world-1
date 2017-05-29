/*************************************************************************
	> File Name: 2磁带最优存储.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2017 07:52:57 PM PDT
 ************************************************************************/

#include<stdio.h>
//磁带最优存储
#define N 100

void Pro(int size[], int n, double b[]);
double ChengJi(int size[], int n, double b[], double chengji[]);
void BubbleSort(int n, double chengji[]);
int Time(double sum[], int n, double chengji[]);
int MinTime(double sum[], int n, int pro1[]);
int main()
{
    int n;

    int size[N];//程序大小
    int pro1[N];//计算后概率
    double chengji[N], b[N], sum[N];

    printf("请输入程序个数：\n");
    scanf("%d", &n);

    printf("请输入程序的大小：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &size[i]);    
    }

    printf("请输入程序的概率：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &pro1[i]);
    }
 
    Pro(pro1, n, b);
    ChengJi(size, n, b, chengji);
    BubbleSort(n, chengji);
    Time(sum, n, chengji);
    MinTime(sum, n, pro1);
    return 0;
}

//计算后概率的函数,a[]计算概率前b[]计算概率后
void Pro(int size[], int n, double b[])
{
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum += size[i];
    }
    for(int j = 0; j < n; ++j)
    {
        b[j] = (double)size[j]/sum;
    }
}

//计算文件和概率的乘积
double ChengJi(int size[], int n, double pro1[], double chengji[])
{
    for(int i = 0; i < n; ++i)
    {
        chengji[i] = (double)size[i] * pro1[i]*(i+1);
    }
}
//对乘积排序
void BubbleSort(int n, double chengji[])
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(chengji[i] > chengji[j + 1])
            {
                int temp = chengji[i];
                chengji[i] = chengji[j+1];
                chengji[j+1] = temp;
            }
        }
    }
}

//计算读取每个程序用时
int Time(double sum[], int n, double chengji[])
{
    int t = 0;
    for(int i = 0; i < n; ++i)
    {
         t += chengji[i];
        sum[i] = t;
    }
    return 0;
}
//计算最小平均时间
int MinTime(double sum[], int n, int pro1[])
{
    double mintimt = 0, p = 0;
    for(int i = 0; i < n; ++i)
    {
         mintimt += sum[i];    
         p += pro1[i];
    }
    
    double average = mintimt/p; 
    printf("用时： %lf" , average);
    printf("\n");
    return 0;
}



