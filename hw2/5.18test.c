/*************************************************************************
	> File Name: 5.18test.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 07:21:08 PM PDT
 ************************************************************************/

#include<stdio.h>

#include<stdio.h>
//升序数列升序合并
#define N 20
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[6] = {2, 4, 6, 8, 10, 11};
    int merge[N] = {0};
    int count = 0;
   
    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);

    int i = 0, j = 0;
    while(i < len1 && j < len2)
    {
        if(arr1[i] < arr2[j])
        {
            merge[count++] = arr1[i];
            i++;
        }
        else
        {
            merge[count++] = arr2[j];
            j++;
        }
    }

    if(i == len1)
    {
        while(j < len2)
        {
            merge[count++] = arr2[j];
            j++;
        }
    }

    if(j == len2)
    {
        while(i < len1)
        {
            merge[count++] = arr1[i];
            i++;
        }
    }

    for(int i = 0; i < (len1+len2); ++i)
    {
        printf("%d ", merge[i]);   
    }

    return 0;
}
