/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 10:49:03 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    float  a[100] = {1.2, 2.3, 3.4 , 4,4, 4,5, 4.6, 4.7, 4.8, 4.9, 5.0};

    float max = a[0];
    float max2 = a[0];
    float min = a[0];

    for(int i = 0; i < 10; ++i)
    {
        if((a[i]-max) >= 0.000001)
        {
            max = a[i];
        }
         (a[i] < max && (a[i]-max2)>=0.000001)
        {
            max2 = a[i];
        }
        if((a[i]-min) <= 0.000001)
        {
            min = a[i];
        }
    }
    /*for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            if(a[i] > a[j+1])
            {
                a[i] = a[j+1];
            }
        }
    }*/

    printf("max = %f \nmin = %f\n max2 = %f",max,min,max2);
    printf("max-min = %f", max-min);

    return 0;
}
