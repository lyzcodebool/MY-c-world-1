/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 10:16:46 AM PDT
 ************************************************************************/

#include<stdio.h>
//数组实现feb
/*void feb(int a[], int len)
{
    
}*/

int main()
{
    int arr[100];
    int n;
    //int b['a'-'A'];//可行
   // int c[-1];//错误
    printf("请输入你想知道最大月数：\n");
    scanf("%d", &n);

    printf("输入前两个月的值：\n");
    scanf("%d%d",&arr[0],&arr[1]);

    printf("%d %d ",arr[0],arr[1]);
    for(int i = 2; i < n; ++i)
    {
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d ", arr[i]);
    }
    return 0;
}
