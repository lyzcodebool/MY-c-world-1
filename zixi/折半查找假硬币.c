/*************************************************************************
	> File Name: 折半查找假硬币.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 01:00:38 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMBER 100

int main()
{
    int coin[NUMBER];                   //保存硬币重量;
    int i, j, s;
    int low, mid, high, total1, total2; //保存每次称重后的数组下标

    int count = 0;                      //计数
    int fake = -1;                      //假硬币的下标

    srand((int)time(NULL));            //生成随机数种子

    for(i = 0; i < NUMBER; ++i)
    {
        coin[i] = 6;
    }

    s = rand()%NUMBER;
    coin[s] = 5;
                                       // printf("假硬币的下标：%d\n",s);

    low = 0;
    high = NUMBER;                     //假硬币范围上限
    mid = (high - low)/2 + low;        //折半位置

    while(low <= mid-1)
    {
        count++;
        if((high - low)%2 == 1)        //折半后不为整数
        {
            fake = --high;             //设最后一枚硬币为假币
        }

        total1 = total2 = 0;            //重量初始化
        for(j = low; j < mid; ++j)     //累计左杆盘的重量
        {
            total1 += coin[j];
        }

        for(j = mid; j < high; ++j)
        {
            total2 += coin[j];
        }

        if(total1 < total2)             //左杆重量轻
        {
            high = mid;
            fake = high -1;              //保存可能的假硬币下标 
        }
        else if(total1 > total2)
        {
            fake = low = mid;
        }
        else
        {
            break;
        }

        printf("第%d次称重后， 假币位于%d～%d之间\n",count, low,high);
        mid = (high - low)/2 + low;
    }

        printf("共进行了 %d 次称重， 第 %d 枚硬币是假的！\n", count, fake+1);
        return 0;
}
