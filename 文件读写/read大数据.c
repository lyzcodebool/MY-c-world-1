/*************************************************************************
	> File Name: read大数据.c
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Apr 2017 09:30:54 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义文件最大有MAX_SIZE，每行字符串的最大长度MAX_LEN;
#define MAX_SIZE 10000
#define MAX_LEN 1000
#include<time.h>

int main()
{
    FILE *fp;
    int i = 0, len = 0;

    char buf[MAX_LEN];
    char *arr[MAX_SIZE];
    int start = clock();
    if(!(fp = fopen("/home/lyzgit/JSKquestions/testcount", "r")))
    {
        printf("打开失败！");
    }
    while(fgets(buf, MAX_LEN, fp))
    {
        len = strlen(buf);
        arr[i] = (char *)malloc(len + 1);
        if(!arr)
        {
            break;
        }
        strcpy(arr[i ++], buf);
    }
    
    fclose(fp);

    i--;
    while(i >= 0&& arr[i])
    {
        printf("%s\n", arr[i]);
        free(arr[i--]);
    }
    
}
