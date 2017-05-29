/*************************************************************************
	> File Name: usingvoid.c
	> Author: 
	> Mail: 
	> Created Time: Mon 08 May 2017 06:47:58 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//提供下面的函数原型
//void srand(unsigned int seed);
//int rand(void);
//void *malloc(size_t size);
//void free(void *ptr);
//void exit(int status);

enum {ARR_LEN = 100};

int main()
{
    int i;
    int *pNumbers = malloc(ARR_LEN * sizeof(int));
    if(pNumbers == NULL)
    {
        fprintf(stderr,"Insufficient memory.\n");
        exit(1);
    }

    srand((unsigned)time(NULL));

    for(int i = 0; i < ARR_LEN; ++i)
    {
        pNumbers[i] = rand()%10000;
    }

    printf("\n%d random numbers between 0 and 9999:\n", ARR_LEN);

    for(int i = 0; i < ARR_LEN; ++i)
    {
        printf("%6d", pNumbers[i]);
        if(i%10 == 9)
        putchar(10);
    }

    //free(pNumbers);
    return 0;
}
