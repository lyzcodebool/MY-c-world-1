/*************************************************************************
	> File Name: 5.26.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 10:20:06 PM PDT
 ************************************************************************/

#include<stdio.h>
//回文字符串的判断

int HuiWenBool(char *str, int n)
{
    int i = 0;
    for(int i = 0; i < n; ++i)
    {
        if(str[i] == str[4-i])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str1[5] = "abcba";
    char str2[6] = "abccba";
    char str3[5] = "abcde";

    int r1 = HuiWenBool(str3, 5);
    if(r1 == 1)
    {
        printf("是回文！");
    }
    if(r1 == 0)
    {
        printf("非回文！");
    }
}
