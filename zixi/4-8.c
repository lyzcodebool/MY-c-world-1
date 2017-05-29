/*************************************************************************
	> File Name: 4-8.c
	> Author: 
	> Mail: 
	> Created Time: Sat 08 Apr 2017 06:12:43 PM PDT
 ************************************************************************/

#include<stdio.h>
//字符倒序输出
void fun()
{
    char p ;
    p = getchar();
    if(p != '\n')
    {
        fun();//利用递归进行压栈，层层梦境；
        printf("%c",p);
    }
}
int main()
{
    fun();
    return 0;
}
