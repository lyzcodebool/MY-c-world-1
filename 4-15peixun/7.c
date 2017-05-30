/*************************************************************************
	> File Name: 7.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 01:22:16 PM PDT
 ************************************************************************/

#include<stdio.h>
//冒泡排序
int main()
{
    int a[7] = {2, 5, 6, 3, 8, 1, 7};
   // int len = sizeof(a)/sizeof(int);

    int temp;
    for(int i = 0; i < 6; ++i)
    {
        for(int j = 0; j < 6-i; ++j)
        {
            if(a[j] > a[j+1])
            {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 7; ++i)
    {
        printf("%d ", a[i]);
    }
}
//快排
/*int main()
{
    int a[10] = {2, 3, 1, 4, 6, 5, 7, 8, 9, 0};
    
}*/
