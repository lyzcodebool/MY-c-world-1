/*************************************************************************
	> File Name: 10.c
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Apr 2017 03:45:28 PM PDT
 ************************************************************************/

#include<stdio.h>
int Msort(char str1[], char str2[]);
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void mstrcopy(char str1[], char str2[])
{
    int i = 0; 
    while((str1[i] = str2[i]) != '\0')
    {
        ++i;
    }
}
void Change(char str1[], char str2[])
{
    char temp2[20] = {'\0'};
    mstrcopy(temp2, str1);
    mstrcopy(str1, str2);
    mstrcopy(str2, temp2);
}

int Msort(char str1[], char str2[])//比较字符串大小
{
    int i = 0;
    while(str1[i] && str2[i] && (str1[i] == str2[i]))//如果不是‘\0’继续
    {
        ++i;
    }
    return str1[i] - str2[i];//返回相减值
}
void Print(char str[5][20])
{
    printf("请输入名字：\n");
    for(int i = 0; i < 5; ++i)
    { 
        scanf("%s", str[i]);
    }
    //通过冒泡排序
    for(int j = 0; j < 4; ++j)
    {
        for(int i = 0; i < 4-j; ++i)

       {
           if(Msort(str[i],str[i+1]) < 0)
            {
                Change(str[i],str[i+1]);
            }
        }
    }
    printf("*************排序后**************\n");
    for(int i = 0; i < 5; ++i)
    {
        printf("%s\n", str[i]);
    }
}
int main()
{
    char str[5][20] = {'\0'};
    Print(str);
}

/*int main ()
{
    int a1[2] = {1, 2};
    int a2[3] = {3, 4};*/

 /* char str1[] = "abcdefg";
    char str2[] = "abdewcd";

    char temp2[20] = {'\0'};

    for(int i = 0; i < 2; ++i)
    {
        swap(&a1[i],&a2[i]);
    }
    for(int j = 0; j < 2; ++j)
    {
        printf("%d %d \n",a1[j],a2[j]);
    }*/
    
 /*   int t = Msort(str1, str2);
    if(t < 0)
    {
        Change(str1, str2);
    }
    printf("%s\n",str1);
    printf("%s",str2);
}*/
