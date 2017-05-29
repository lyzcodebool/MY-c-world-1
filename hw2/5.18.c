/*************************************************************************
	> File Name: 5.18.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 06:53:13 PM PDT
 ************************************************************************/

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
    
    for(int i = 0; i < len1; ++i)
    {
        for(int j = 0; j < len2; ++j)
        {
            if(arr1[i] < arr2[j])
            {
                merge[count++] = arr1[i];
                break;
            }
            else if(arr1[i] > arr2[j])
            {
                merge[count++] = arr2[j];
                break;
            }
        }
    }

    for(int i = 0; i < count; ++i)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}
