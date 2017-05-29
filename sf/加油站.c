/*************************************************************************
	> File Name: 加油站.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2017 10:38:18 PM PDT
 ************************************************************************/

#include<stdio.h>
#define n 7
int main()
{
    int a = 7, b = 7;
    int point[n + 1] = {1, 2, 3, 4, 5, 1, 6, 6};
    int count = 0;
    int sum = 0;
    
    /*for(int i = 0; i < (n+1); ++i)
    {
        sum += point[i];
        while((sum+point[i+1]) <= a)
        {
            a -= point[i];
            continue;
        }
        a = n;
        sum = 0;
        continue;
    }*/
    for(int i = 0; i <= n; ++i)
    {
        sum += point[i];
        if(sum <= a)
        {
            a -=  point[i];
        }
        else
        {
            count++;
            a = n;
            sum = point[i];
        }
    }

    printf("%d", count);
    return 0;
}

