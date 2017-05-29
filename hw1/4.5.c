/*************************************************************************
	> File Name: 4.5.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2017 06:33:47 AM PDT
 ************************************************************************/

#include<stdio.h>
//判断是否为闰年，返回二月天数
int FbDays(int y)
{
    if(((0 == y%4)&&(0 != y%100))||(0 == y%400))
    return 28;
    return 29;
}

void Days(int y, int m, int d)
{
    int fd = FbDays(y);
    if(m == 1)
    printf("该日是今年的第%d天",d);
    if(m == 2)
    printf("该日是今年的第%d天",d+31);
   // int count1 = fd+31;
    if(m<8 && m>2)
    {
        int n = m/2;
        if(m %2 !=0)
        {
            int x = fd +(n+1)*31+(n-1)*30;
            printf("该日是今年的第%d天",x);
        }
        else
        {
           int x = fd + n*31 + (n-1)*30;  
            printf("%d",x);
        }
    }
    if(m>=8)
    {
       int n = (m-8)/2;
       if(m%2 !=0)
       {
           int x = 184+fd+(n+1)*31+(n+1)*30;   
            printf("该日是今年的第%d天",x);
       }
        else
        {
            int x = 184 +fd+(n+1)*31+n*30;
            printf("该日是今年的第%d天",x);           
        }
    }
}

int main()
{
    int year, mon, day;

    printf("请输入年月日：\n");
    scanf("%d %d %d",&year, &mon, &day);
    printf("今年是：\n  %d年-%d月-%d日",year,mon,day);
    Days(year, mon, day);
    return 0;
}
