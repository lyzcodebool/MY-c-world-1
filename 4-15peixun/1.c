/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 09:12:07 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    double m;

    printf("请输入成绩：\n");
    scanf("%lf", &m);

    int n = m;

    if(n >= 90 && n <= 100)
    {
        printf("成绩为 ：A!");
    }

    else if(n >= 80&&n < 90)
    {
        printf("成绩为 : B!");
    }
    else if(n >= 60 && n < 80)
    {
        printf("成绩为 ：C！");
    }
    else if(n >= 0 && n < 60)
    {
        printf("成绩为 ：D！");
    }
    else
    {
        printf("数据非法！");
    }
    printf("\n");
    char c;

    printf("请输入学生成绩等级：\n");
    getchar();
    c = getchar();

    /*if(c == 'A')
    {
        printf("90 ~ 100");
    }
    
    else if (c == 'B')
    {
        printf("80 ~ 90");
    }

    else if(c == 'C')
    {
        printf("60 ~70");
    }
    else (c == 'D')
    {
        printf("<60");
    }*/

    switch(c)
    {
        case 'A':
        {
            printf("90 ~ 100");
        }
        break;
        case 'B':
        {
            printf("80 ~ 90");
        }
        break;
        case 'C':
        {
            printf("70 ~ 80");
        }
        break;
        case 'D':
        {
            printf("0 ~ 60");
        }
        break;
    }
    return 0;
}

