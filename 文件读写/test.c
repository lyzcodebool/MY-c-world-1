int ma/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Apr 2017 10:14:07 PM PDT
 ************************************************************************/

#include<stdio.h>
#define M 100
#define N 50

int main()
{
    int a[M];
    
    FILE *fp;

    if(!(fp = fopen("/home/lyzgit/ZICI/text", "r")))
    {
        printf("读取失败！");
    }

    for(int i = 0; i < M; ++i)
    {
        fscanf(fp, "%d", &a[i]);
        fscanf(fp, "\n");
    }

    fclose(fp);

    for(int i = 0; i < 10; ++i)
    {
        printf("%d\n", a[i]);
    }
}
