/*************************************************************************
	> File Name: 5.20.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 07:38:51 PM PDT
 ************************************************************************/

#include<stdio.h>
//二维矩阵换位
void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[5][5] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5};
    int m = 0;
    
    for(int i = 0; i < 5; ++i)
    {
        int max = a[i][0];
        for(int j = 0; j < 5; ++j)
        {
            if(a[i][j] >= max)
            {
                max = a[i][j];
                m = j;
            }

        }
        swap(&a[i][m], &a[i][i]);
    }

    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            printf("%d ", a[i][j]);
        }
        putchar(10);
    }
    return 0;
}
