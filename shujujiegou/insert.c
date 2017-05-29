/*************************************************************************
	> File Name: insert.c
	> Author: 
	> Mail: 
	> Created Time: Fri 12 May 2017 09:42:31 PM PDT
 ************************************************************************/

#include<stdio.h>
//在树组中插入元素
void InsertArr(int a[], int n, int len, int key);
void print(int a[], int len);
int main()
{
    int a[10] = {1, 3 ,2 ,5, 8};

    int n, key;

    printf("请输入你想插入的位置：\n");
    scanf("%d", &n);

    int len = sizeof(a) / sizeof(int);

    printf("请输入你要插入的元素：\n");
    scanf("%d", &key);

    InsertArr(a, n, len, key);
    return 0;
}

void InsertArr(int a[], int n, int len, int key)
{
    if(n >= len)
    {
        a[n] = key;
        print(a, n);
    }

    else
    {
        int temp = a[n];
        a[n] = key;

        for(int i = n; i < n; ++i)
        {
            a[i + 1] = temp;
            temp = a[i + 1];
        }

        print(a, len);
    }
}

void print(int a[], int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%d", a[i]);
    }
}
