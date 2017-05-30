/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 11:52:32 AM PDT
 ************************************************************************/

#include<stdio.h>

void SelectMax(int a[], int len, int temp[], int n);
int main()
{
    int a[5] = {2, 3, 1, 5, 4};
    int temp[3] = {0};

    SelectMax(a,sizeof(a)/sizeof(int),temp,sizeof(temp)/sizeof(int));
    for(int i = 0; i < sizeof(temp)/sizeof(int); ++i)
    {
        printf("%d ", temp[i]);
    }
    return 0;
}
void SelectMax(int a[], int len, int temp[], int n)
{
    if(n > len)
    {
        printf("非法！");
        return;
    }
    for(int i = 0; i < len; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(a[i] > temp[j])
            {
                for(int k = n-2; k >= j; k--)
                {
                    temp[k + 1] = temp[k]; 
                }
                temp[j] = a[i];
                break;
            }
        }
    }
}
