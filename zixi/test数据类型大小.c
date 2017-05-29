/*************************************************************************
	> File Name: test数据类型大小.c
	> Author: 
	> Mail: 
	> Created Time: Sun 07 May 2017 03:58:34 PM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    printf("int: %d\n", sizeof(int));
    printf("char: %d\n", sizeof(char));
    printf("long int: %d\n", sizeof(long int));
    printf("short int: %d\n", sizeof(short int));
   // printf("long char: %d\n", sizeof(long char));
   // printf("short char: %d\n", sizeof(short char));
    printf("unsigned int: %d\n", sizeof(unsigned int));
    printf("unsigned char: %d\n", sizeof(unsigned char));
    printf("unsigned long int: %d\n", sizeof(unsigned long int));
    printf("unsigned short int: %d\n", sizeof(unsigned short int));

    return 0;
}
