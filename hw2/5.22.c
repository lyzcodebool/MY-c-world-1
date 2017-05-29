/*************************************************************************
	> File Name: 5.22.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 08:28:59 PM PDT
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a[4] = {5, 1, 8, 6};
    int c[7][7] = {0};

    for(int i = 0; i < 7; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            c[i][j] = 5;
        }
    }

    int m = 7;
    int i = 0, j = 0;

    while(i < 4)
    {
        int n = m % 10;
        for(int j = i; j < (i+n); ++j)
        {
            c[i][j] = a[i];
        }

       /* for(int k = 1; k <= i; ++k)
        {
                    
        }*/
        m -= 2;
        i++;
    }

    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            printf("%d ", c[i][j]);
        }
        putchar(10);
    }
    for(int i = 2; i >= 0; --i)
    {
        for(int j = 0; j < 7; ++j)
        {
            printf("%d ", c[i][j]);
        }
        putchar(10);
    }
    return 0;
}
