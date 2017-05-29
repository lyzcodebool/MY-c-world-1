/*************************************************************************
	> File Name: shunxubiao.h
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 11:39:51 PM PDT
 ************************************************************************/

#ifndef _SHUNXUBIAO_H
#define _SHUNXUBIAO_H
#define MAX 100

typedef struct
{
    int data[MAX];
    int len;
}SeqList;


//顺序表的创建
void CreatList(SeqList *L)
{
    int i, n;

    printf("请输入顺序表的长度：\n");
    scanf("%d",&n);
    
    printf("请输入顺序表的元素：\n");
    for(i = 0; i < n; ++i)
    {
        scanf("%d",&(L)->data[i]);
    }
    L->len = n;
    for(i = 0; i < n; ++i)
    {
        printf("%d ",L->data[i]);
    }
    printf("\n");
}

//顺序表插入元素
void InsertList(SeqList *L, int i, int x)
{
    int j;
    if(L->len == MAX-1)
    printf("表满！");

    else if(i<1 || i > (L->len+1))
    printf("请输入合法位置！");

    else
    {
        for(j = L->len; j>=i; j--)
        L->data[j + 1] = L->data[j];
        L->data[i] = x;
        L->len++;
    } 
}

//顺序表删除元素
void DeteList(SeqList *L, int i)
{
    int j;
    if(L->len = 0)
    printf("表空！");

    else if(i<1 || i > (L->len+1))
    printf("请输入合法位置！");
    
    else
    {
        for(j = i+1; j <= L->len; j++)
        {
            L->data[j-1] = L->data[j];
        }
        L->len--;
    }
}

//顺序表查找元素
int  SearchList(SeqList *L, int x)
{
    int i = L->len;
    L->data[0] = x;
    while(L -> data[i] != x)
    i--;
    return i;
}

//menu
void menu()
{
    printf("1.插入元素\n");
    printf("2.删除元素\n");
    printf("3.查找元素\n");
}
#endif
