/*************************************************************************
	> File Name: 3-20night.c
	> Author: 
	> Mail: 
	> Created Time: Fri 31 Mar 2017 06:18:33 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
/*

int main()
{
    int *array;
    int arraylen;
    int i;

    printf("请输入数组长度:\n");
    scanf("%d",&arraylen);

    array = (int *)malloc(arraylen*sizeof(int));
    if(!array)
    printf("创建失败！");
     

    printf("请输入数组元素：\n");
    for(i = 0 ; i < arraylen; ++i)
    {
        scanf("%d",&array[i]);
    }

    printf("数组为:\n");
   for(i = 0 ; i < arraylen; ++i)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    free(array);
    system("pause");
    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *array;
    int *arrayCopy;
    int arraylen;
    int i;

    printf("请输入数组长度:\n");
    scanf("%d",&arraylen);

    arrayCopy = array = (int *)malloc(arraylen*sizeof(int));
    if(!array)
    printf("创建失败！");
     

    printf("请输入数组元素：\n");
    for(i = 0 ; i < arraylen; ++i)
    {
       * arrayCopy++ = i + 1;
    }

    printf("数组为:\n");
    arrayCopy = array;
   for(i = 0 ; i < arraylen; ++i)
    {
        printf("%d ",*arrayCopy++);
    }
    printf("\n");
    free(arrayCopy);
    system("pause");
    return 0;
}



