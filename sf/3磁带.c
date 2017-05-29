/*************************************************************************
	> File Name: 3磁带.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2017 09:58:11 PM PDT
 ************************************************************************/

#include<stdio.h>
#define n 5
int main()
{
    int a[n] = {71, 46, 9, 73, 35};
    int b[n] = {872, 452, 265, 120, 85};

    int sum[n], t = 0;

    for(int i= 0; i < n; ++i)
    {
        sum[i] = a[i]*b[i];
        t += b[i];
    }
    printf("%d", t);
    putchar(10);
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = 0; j < n-i-1; ++j)
        {
            if(sum[j] < sum[j + 1])
            {
                int temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%d  ", *(sum + i));
    }
    double  time = 0;
    for(int i = 0; i < n; ++i)
    {
        time += sum[i]*(i + 1);   
    }

    double result = time / t;
    printf("%.4lf",result);
    return 0;
}
