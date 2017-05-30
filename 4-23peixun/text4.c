/*************************************************************************
	> File Name: text4.c
	> Author: 
	> Mail: 
	> Created Time: Tue 25 Apr 2017 04:49:19 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<math.h>
void R(int n,int count, int m, int k);
int main()
{
    int n, count = 0, k = 0;
    printf("请输入整数：\n");
    scanf("%d", &n);
    int m = n;
    R(n,count,m,k);
}
void R(int n,int count, int m, int k)
    {
        n /= 10;
        count ++;
        if(n/10 == 0)
        {
            if(n > 0)
            {
            printf("%d\n", n);
            n = m - n*pow(10,count);
            count = 0;
            }
            if(n <= 0)
            {
                printf("%d", k);
                return;
            }
            m = n;
            k = m;
        }
        R(n, count, m, k);
    }
