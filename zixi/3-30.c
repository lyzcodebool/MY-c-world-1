/*************************************************************************
	> File Name: 3-30.c
	> Author: 
	> Mail: 
	> Created Time: Thu 30 Mar 2017 11:25:23 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 100


int  Parttition(int a[] , int h ,int l);
int Select(int a[],int h,int l,int k);
void Swap(int *p,int *q);


void Swap(int *p,int *q)//交换位置
{
    int temp = *p;
    *p = *q;
    *q = temp;
}


int  Parttition(int a[] , int h ,int l)//将数组按照第一个数字进行划分，比a[h]小的移到左侧，大的移到右侧；
{
   int i = h;
   int j = l + 1;
    int x = a[h];
    while(1)
    {
        while(a[++i] < x && i<l)
        while(a[--j] > x)
        if(i > j)
        {break;}
        Swap(&a[i],&a[j]);
    }
    a[h] = a[j];
    a[j] = x;
    return j;
}


int Random_Part(int a[],int h ,int l)
{   
      int sjnum = rand()%(sizeof(&a)/sizeof(int));
    //随机数的产生，产生分点；(sizeof(&a)/sizeof(int)&a需要传整个数组的地址
    
    Swap(&a[h],&a[sjnum]);//交换数组首元素与分点元素的位置，使得分点位于行首
      return Parttition(a,h,l);
}


int Select(int a[],int h,int l,int k)
{
 int i , j;
    if(k > l)
    return -1; 
    if(h = l) 
    return a[h];
    i = Random_Part(a , h , l);
    j = i - h +1; 
    if (k <= j)
    {
        return Select(a,h,i,k);
    }
    else
    return Select(a,i+1,l,k-j);
}

int main()
{  
    int a[N];
    int k , j ;
    printf("你想输入几个数字呢？");
    scanf("%d",&j);
    printf("请输入一组数据：\n");
    for(int i = 0 ; i < j ; ++i)
    scanf("%d",&a[i]);
   // int len = sizeof(a)/sizeof(int);
    printf("请输入你想要查询的第k小元素：\n");
    scanf("%d",&k);
    int s = Select(a,0,j-1,k);
    printf("%d",s);
    return 0;
}
