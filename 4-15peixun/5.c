/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 11:24:38 AM PDT
 ************************************************************************/

#include<stdio.h>
int SelectMax(int a[],int len)
{
    int m;
        for(int i = 0; i < len; ++i)
    {
        if((a[i]-max) >= 0.000001)
        {
            max = a[i];
            m = i;
        }
    }
        return m;
}
int SelectMin(int a[], int len)
{
    int n;
   for(int i = 0; i < len; ++i) 
   {
        if((a[i]-min) <= 0.000001)
        {
            min = a[i];
            n = i;
        }
    }
   return n;
}

int main()
{
    float  a[100] = {1.2, 2.3, 3.4 , 4,4, 4,5, 4.6, 4.7, 4.8, 4.9, 5.0};

    float max = a[0];
    float max2 = a[0];
    float min = a[0];

    int m,n;


    printf("max = %f \nmin = %f\n max2 = %f",max,min,max2);
    printf("max-min = %f", max-min);

    return 0;
}
