/*************************************************************************
	> File Name: 4.1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 10:10:05 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int *p , *tmp;
   int plen;
    int i = 1;
    int m = 0;
    int j = 2;
    int k = 0;

    printf("请输入你要搜寻的范围：\n");
    scanf("%d",&plen);

    p = (int *)malloc(sizeof(int)*plen);

    if(!p)
    {
        printf("创建失败！"); 
    }

    //输入数据
    for(i = 1; i <= plen; ++i)
    {
        p[i] = i;
    }

    //判断一个数是否为素数
    for(i = 2; i <= plen; ++i)
    {
        int k = (int)sqrt(p[i]);
        for(j = 2; j <= k ; ++j)
        {
            if(0 == p[i]%j)
                break;
        }
        if(j > k)
        printf("%d  ",p[i]);
    }
    return 0;
}
