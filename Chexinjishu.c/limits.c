/*************************************************************************
	> File Name: limits.c
	> Author: 
	> Mail: 
	> Created Time: Mon 08 May 2017 04:46:06 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>

int main()
{
    printf("Storage size and value ranges of the types char and int \n\n");
    printf("The type char is %s.\n\n", CHAR_MIN < 0?"signed" : "unsigned");

    printf("Type    Size (in bytes)    Minimum       Maximum\n""------------------------------------------\n");

    printf("char %8d %20d %15d\n",sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("int  %8d %20d %15d\n",sizeof(int), INT_MIN, INT_MAX);
    printf("--------------------------------------------\n");

    int ui = INT_MAX;//+2以后上溢，处理方式不确定，有可能被忽略，或者产生一个signal，也有可能使程序失效abort
    //unsigned int ui = UINT_MAX;//输出-1因为是无符号整型
    ui += 2;

    printf("%d", ui);
    return 0;
}
