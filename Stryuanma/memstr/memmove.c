/*************************************************************************
	> File Name: memmove.c
	> Author: 
	> Mail: 
	> Created Time: Wed 10 May 2017 08:54:43 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>

//copy字符串，内存区域可重叠
void *my_memmove(void *dst, const void *src, int count);
int main()
{
    //内存不重叠
    char a[20]; 
    puts((char *)my_memmove(a, "hello world!", 16));
    

    //内存重叠
    char str[100] = "memmove is very useful ....";

    my_memmove(str+20, str+15, 11);
    puts(str);

    return 0;
}

void *my_memmove(void *dst, const void *src, int count)
{
    assert(dst != NULL && src != NULL);
    //判断内存是否重叠
    if((unsigned char *)dst >= ((unsigned char *)src + count))
    {
       dst = memcpy(dst, src, count);
    }

    //如果dst与src内存重叠，从尾部进行拷贝
    else
    {
        unsigned char *p = (unsigned char *)dst + count;
        unsigned char *q = (unsigned char *)src + count;

        while(count--)
        {
            *--p = *--q;//赋值
        }
   //     p[count + 1] = '\0';//错误：重复区域拷贝完毕以后在拷贝后的第一个字符处中断；
    }
    return dst;
}
