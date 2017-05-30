/*************************************************************************
	> File Name: test3.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2017 12:18:53 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 30

int relu(char ch)
{
    if(ch == ' '|| ch == ',' || ch == ';' || ch == '!')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char str[N] = ",!abcd;acde;hefg!";

    char min[N] = {'\0'};
    char max[N] = {'\0'};
    char word[N] = {'\0'};

    /*printf("请输入字符串：\n");
    str = gets();*/
    int len = strlen(str), k = 0;
    //初始化
    int j = 0;
    do
    {
        j++;
    }while(relu(str[j]) == 0);    

    int m = 0, l = 0;
    while(relu(str[j]) == 1)
    {
        min[m++] = str[j];
        max[l++] = str[j];
        j++;
    }

    for(int i = 0; i < len; ++i)
    {
        if(relu(str[i]) == 1)
        {
            word[k] = str[i];
            k++;
        }
        else if(strlen(word) > 0)
        {
           if(strcmp(word,max) > 0)
        {
            strncpy(max, word, strlen(word)+1);
        }
        else if(strcmp(word, min) != 0)
        {
            strncpy(min, word, strlen(word)+1);
        }
        memset(word, '\0', strlen(word)+1);
        k = 0;
       }
    }
    printf("最大：%s\n", max);
    printf("最小：%s\n", min);
}
