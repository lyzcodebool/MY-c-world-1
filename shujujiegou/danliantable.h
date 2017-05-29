/*************************************************************************
	> File Name: danliantable.h
	> Author: 
	> Mail: 
	> Created Time: Thu 06 Apr 2017 01:16:53 AM PDT
 ************************************************************************/

#ifndef _DANLIANTABLE_H
#define _DANLIANTABLE_H
//单链表的结构体定义
typedef struct node
{
    int data;//结点的数据域
    struct node *next;//结点的指针域
}LNode;//单链表结点类型

//求单链表的表长
int LenthList(LNode *head)
{
    LNode *p = head;
    int i = 0;
    while(p -> next != 0)
    {
        p = p->next;
        i++;
    }
    return i;
}

//在单链表中查找元素(按照位置查找)
LNode *GetLinkList(LNode *head, int i)
{
    LNode *p = head;
    int j = 0;
    while(p != NULL && j < i)
    {
        p = p -> next;
        j++;
    }
    return p;
}

//在单链表中查找元素(按照数值查找)
LNode *GetLinkcount(LNode *head,char x)
{
    LNode *p = head->next;
    while(p != NULL && p->data != x)
    p = p -> next;
    return p;
}

//在单链表中插入元素
void InsertLink(LNode *head, int i, char x)
{
    LNode *p, *q;
    p = GetLinkList(head , i-1);
    if(p = NULL)
    printf("error:无法插入元素！\n");

    else
    {
        q = (LNode *)malloc(sizeof(LNode));
        q -> data = x;
        q ->next = p -> next;
        p ->next = q;
    }
}

//在单链表中删除元素
void DeteLink(LNode *head , int i)
{
    LNode *p, *q;
    p = GetLinkList(head , i-1);
    if(p == NULL)
    printf("error:无法删除！");

    else if(p->next == NULL)
    printf("想要删除的元素不存在！");

    else
    {
        q = p -> next;
        p -> next = q -> next;
        free(q);
    }
}

void menu()
{
    printf("1.插入元素\n");
    printf("2.删除元素\n");
    printf("3.查找元素\n");
}
#endif
