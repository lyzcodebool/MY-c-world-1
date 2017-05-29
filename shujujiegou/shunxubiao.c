/*************************************************************************
	> File Name: shunxubiao.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 11:30:02 PM PDT
 ************************************************************************/

#include<stdio.h>
#include"shunxubiao.h"
#include<stdlib.h>

//顺序表的初始化
void *InitSeqList(SeqList *L)
{
    L = (SeqList *)malloc(sizeof(SeqList));
    L->len = 0;
    return L;
}
int main()
{
    int n, m, l, a, b, c;
    SeqList *L;
    InitSeqList(L);
    CreatList(L);
    menu();
    printf("请输入你的选择:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("请输入插入元素的位置和想要插入的元素（空格隔开）:\n");
        scanf("%d %d",&m,&l);
        InsertList(L,m,l);
        for(int i = 0; i < L->len; ++i)
        {
          printf("%d ",L->data[i]);
        }
        break;

        case 2:
        printf("请输入想要删除元素的位置：\n");
        scanf("%d",&a);
        DeteList(L,a);
        break;

        case 3:
        {
            printf("请输入想要查找的元素：\n");
            scanf("%d",&b);
            c = SearchList(L,b);
            if(c != 0)
            printf("该元素在%d号位置！\n",c);
            else
            printf("数据库内搜索不到！\n");
        }break;
    }
}
