/*************************************************************************
	> File Name: define.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2017 08:23:18 PM PDT
 ************************************************************************/

#include <stdio.h>
#define INCREMENT(x) x+2
int main()
{
    char *ptr = "GeeksQuiz";
    int x = 10;
    printf("%s  ", INCREMENT(ptr));//字符串后移两位
    printf("%d", INCREMENT(x));//x+2
    return 0;
}
// Output: eksQuiz 12
//
//#include<stdio.h>
#define max 100
int main()
{
    printf("max is %d", max);
    return 0;
}
// Output: max is 100
// Note that the max inside "" is not replaced
