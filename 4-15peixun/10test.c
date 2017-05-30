/*************************************************************************
	> File Name: 10test.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 06:09:47 PM PDT
 ************************************************************************/

#include<stdio.h>

void mstrcopy(char str1[], char str2[]);//字符串赋值；
int Compare(char str1[], char str2[]);//比较两个字符串的大小
void Change(char str1[], char str2[]);//交换字符串

void Change(char str1[], char str2[])//交换字符串
{
    char temp[20] = {'\0'};//temp必须申请足够大的空间，不然会引起内存泄漏
    mstrcopy(temp, str1);
    mstrcopy(str1, str2);
    mstrcopy(str2, temp);
}

int Compare(char str1[], char str2[])//比较两个字符串的大小
{
    int i = 0;
    while(str1[i] && str2[i] && (str1[i] == str2[i]))
    {
        i ++;
    }

    return str1[i] - str2[i];//返回相减的值，根据正负确定大小;
}

void mstrcopy(char str1[], char str2[])//字符串赋值；
{
    int i = 0;
    while((str1[i] = str2[i]) != '\0')
    {
        ++i;
    }
}

int main()
{
    char str1[5][20] = {'\0'};

    printf("请输入五个名字：\n");
    for(int i = 0; i < 5; ++i)
    {
        scanf("%s", str1[i]);
    }

    //用冒泡排序来对字符串进行排序
    for(int i = 0; i < 5-1; ++i)
    {
        for(int j = 0; j < 5-i-1; ++j)
        {
            if(Compare(str1[j], str1[j+1]) > 0)
            {
                Change(str1[j], str1[j + 1]);
            }
        }
    }

    printf("**********排序后**********\n");

    for(int i = 0; i < 5; ++i)
    {
        printf("%s\n", str1[i]);
    }
}




