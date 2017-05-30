/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 02:00:19 PM PDT
 ************************************************************************/

#include<stdio.h>
//二维数组使用
void SelectMax(int a[][4]);

int main()
{
    int arr[][4] = {1,2,3,4,4,3,2,1,4,5,6,7};
    int sum = 0;
    int sumarr = 0;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            sum += arr[i][j];
            printf("%d",arr[i][j]);
        }
        sumarr += sum;
        printf("%d 行的平均值为：%lf",i+1,(double)sum/4);
        putchar(10);
    }
    printf("整个二位数组的平均值：%lf",(double)sumarr/12);
    putchar(10);
    SelectMax(arr);
    return 0;
}
void SelectMax(int a[][4])
{
    int temp;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            if(a[i][j] > a[i][j+1])
            {
                temp = a[i][j];
                a[i][j] = a[i][j + 1];
                a[i][j+1] = temp;
            }
        }
        printf("%d行最大的数字为：%d",i+1,a[i][3]);
        putchar(10);
    }
    int max = a[0][3];
    for(int i = 1; i < 3; ++i)
    {
        if(a[i][3] >= max)
        {
            max = a[i][3];
        }
    }
    printf("整个二位数组的最大值为：%d\n",max);
    
}
