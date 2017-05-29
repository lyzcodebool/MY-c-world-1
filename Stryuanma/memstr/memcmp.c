/*************************************************************************
	> File Name: memcmp.c
	> Author: 
	> Mail: 
	> Created Time: Wed 10 May 2017 09:33:21 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

//比较内存区域buffer1 与 buffer2 的前count个子节
int my_memcmp(const void *buffer1, const void *buffer2, int count);
int main()
{
    char *str1 = "hello";
    char *str2 = "hellow";
    int n;
    printf("please input a count\n");
    scanf("%d", &n);

    int res = my_memcmp(str1, str2, n);
    if(res > 0)
        printf("%s Upper Than %s\n", str1, str2);
    else if(res < 0)
        printf("%s Lower Than %s\n", str1, str2);
    else
        printf("%s Equal %s\n", str1, str2);

    return 0;
}   

int my_memcmp(const void *buffer1, const void *buffer2, int count)
{
    assert(buffer1 != NULL && buffer2 != NULL);

    if(!count)
    {
        return 0;
    }
    while((count --) && ((*(char *)buffer1++) == ((*(char *)buffer2++))));
    
    return ( *((unsigned char *)buffer1) - *((unsigned char *)buffer2) );
}
