/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2017 09:20:46 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define N 100
void Insert(int n, char str[], int len, char world[], char max[], char min[]);
int main()
{
    char str[N] = "!abcd,bcde!efgh;hello,world";
    char world[N];
    char max[N] = {'\0'};
    char min[N] = "abcd";
    int len = strlen(str);
 
    
    Insert(0,str,len,world,max,min);
       return 0;
}
int rule(char ch)
{
    int i = 0;
    if(ch == ' '||ch == ','||ch == ';'||ch == '!')
    {
        return 1;
    }
    return 0;
}
void Insert(int n, char str[], int len, char world[], char max[], char min[])

{   
    int i = n;
    int m, k = 0;
    if('\0' == str[i])
    {
        int len2 = strlen(max);
            printf("最大的单词是：%s\n", max);
        int len3 = strlen(min);
            printf("最小的单词是：%s", min);
        int len4 = strlen(world);
            printf("world单词是：%s", world);
    }
   else
    {
    for(i = n; i < len; ++i)
    {
        m = rule(str[i]);

        if(1 == m)
        {
            world[i] = '\0';
            break;
        }
        if(0 == m)
        {
            world[k++] = str[i];           
        }
    }
        printf("world:%s\n",world);
    
    if(strcmp(world, max) > 0)
    {
        int a = 0;
        memset(max, '\0', strlen(max)+1);
        for(int j = 0; j < k; ++j)
        {
            max[a++] = world[j];
        }
        printf("max:%s\n",max);
    }
    
    if(strcmp(world, min) < 0)
    {
        int b = 0;
        memset(min, '\0',strlen(min)+1);
        for(int j = 0; j < k; ++j)
        {
            min[b++] = world[j];
        }
        printf("min:%s\n", min);
    }

    memset(world, '\0', k);
    Insert(n + i + 1, str, len, world, max, min);   
    }
}
