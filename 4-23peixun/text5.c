/*************************************************************************
	> File Name: text5.c
	> Author: 
	> Mail: 
	> Created Time: Tue 25 Apr 2017 06:35:03 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    long long int num = 0;
    long long int count = 0;
    long long int tmp = 0;

    printf("请输入整数：\n");
    scanf("%lld", &num);

    tmp = num;

    while(num)
    {
        num /= 10;
        count ++;
    }

    for(int i = count-1; i >= 0; i--)
    {
       int m = (int)(tmp/pow(10,i))%10;
        printf("\n%d",m);
    }

    return 0;
}
