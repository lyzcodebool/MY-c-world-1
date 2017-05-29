/*************************************************************************
	> File Name: swap.h
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2017 06:43:49 PM PDT
 ************************************************************************/

#ifndef _SWAP_H
#define _SWAP_H
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
#endif
