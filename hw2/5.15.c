/*************************************************************************
	> File Name: 5.15.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 04:46:52 PM PDT
 ************************************************************************/

#include<stdio.h>
//fibonacci数组实现:
#define N 20
int main()
{
    int a[N];
    a[0] = 1;
    a[1] = 1;
    int n;
    printf("请输入数组大小（<=20）:\n");
    scanf("%d", &n);
    for(int i = 2; i < n; ++i)
    {
        a[i] = a[i-1] + a[i-2];   
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
