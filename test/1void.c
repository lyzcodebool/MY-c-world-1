/*************************************************************************
	> File Name: 1void.c
	> Author: 
	> Mail: 
	> Created Time: Tue 16 May 2017 10:09:29 PM PDT
 ************************************************************************/

#include<stdio.h>
//函数不加返回类型默认为int
add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 9;
    int b = 10;

//    add(a, b);

    printf("%d", add(a, b));
}
