/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 09:47:53 AM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
   char c;
    printf("请输入学生成绩等级：\n");
    c = getchar();
    if(c == 'A')
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
    else if(c == 'D')
    {
        printf("<60");
    }
    return 0;
}
