/*************************************************************************
	> File Name: danliantable.c
	> Author: 
	> Mail: 
	> Created Time: Thu 06 Apr 2017 01:12:29 AM PDT
 ************************************************************************/

#include<stdio.h>
#include"danliantable.h"
#include<stdlib.h>

//单链表

//建立单链表
void CreatLinkList(LNode *head)
{
    char x;
    LNode *p;

    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;

    printf("请输入一个字符\n");
    ("%c",&x);

    while(x != '\n')
    {//实现表头插入
        p = (LNode*)malloc(sizeof(LNode));
        p->data = x;
        p->next = head->next;
        head->next = p;
        scanf("%c",&x);
    }
}

int main()
{
    char l;
    int n, m, a, b, c;
    LNode *H;
    CreatLinkList(H);
    menu();
    printf("请输入你的选择:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("请输入插入元素的位置和想要插入的字符（空格隔开）:\n");
        scanf("%d %c",&m,&l);
        InsertLink(H,m,l);
        break;

        case 2:
        printf("请输入想要删除元素的位置：\n");
        scanf("%d",&a);
        DeteLink(H,a);
        break;

        case 3:
        {
            printf("请输入想要查找的元素：\n");
            scanf("%d",&b);
             GetLinkList(H,b);
            /*if(c != NULL)
            printf("该元素为%c\n",c);
            else
            printf("数据库内搜索不到！\n");*/
        }break;
    }
}
