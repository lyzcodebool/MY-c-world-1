/*************************************************************************
	> File Name: 3汉诺塔.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Apr 2017 04:21:40 PM PDT
 ************************************************************************/

#include<stdio.h>

static int count = 0;
void Hanoi(int n, char A, char B, char C)
{
    if(1 == n)
   {
       printf("第%d次 将%c柱上的盘子移动到%c柱\n",++count,A,C);
   }
    else
    {
        Hanoi(n-1, A, C, B);
        printf("第%d次 将%c柱上的盘子移动到%c柱\n",++count,A,C);
        Hanoi(n-1, B, A, C);
     }
}
int main()
{
    int n;
    printf("请输入a柱上的汉诺塔数量:\n");
    scanf("%d",&n);

    Hanoi(n,'A', 'B', 'C');
    return 0;
}
