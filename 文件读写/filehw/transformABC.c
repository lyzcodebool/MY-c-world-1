/*************************************************************************
	> File Name: transformABC.c
	> Author: 
	> Mail: 
	> Created Time: Wed 10 May 2017 12:19:19 AM PDT
 ************************************************************************/

#include<stdio.h>
//小写字母转成大写字母，存入磁盘
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch, temp;
    
    if((fp = fopen(argv[1], "wt")) == NULL)
    {
        printf("error: the file <%s> open filded!", argv[1]);
    }

    printf("请输入英文字母（自动转换成大写存入文件）: \n");

    temp = getchar();
    while(temp != '\n')
    {
        if(temp >= 'a' && temp <= 'z')
        {
            temp -= 32;
        }
        fputc(temp, fp);
        temp = getchar();
    }

    fclose(fp);
}
