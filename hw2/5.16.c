/*************************************************************************
	> File Name: 5.16.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 04:52:29 PM PDT
 ************************************************************************/

#include<stdio.h>
//数组元素前移
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(int);
    int temp = a[0];
    for(int i = 0; i < len; ++i)
    {
        a[i] = a[i+1];         
    }
    a[len - 1] = temp;
    for(int i = 0; i < len; ++i)
    {
        printf("%d", a[i]);
    }
    return 0;
}
