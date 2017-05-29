/*************************************************************************
	> File Name: qsort.c
	> Author: 
	> Mail: 
	> Created Time: Thu 11 May 2017 06:21:27 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//调用api的qsort
int my_cmp(const void *a, const void *b);
int main()
{
    int a[7] = {2 , 1, 4, 3, 6, 8, 7};

    int *p;
    p = (int *)malloc(7 * sizeof(int));

    qsort(a, 7, sizeof(int), my_cmp);

    for(int i= 0; i < 7; ++i)
    {
        printf("%d", a[i]);
    }
    return 0;
}

int my_cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return (x < y) ? -1: ((x == y)) ? 0:1;

}
