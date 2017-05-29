/*************************************************************************
	> File Name: student.h
	> Author: 
	> Mail: 
	> Created Time: Wed 10 May 2017 07:51:24 PM PDT
 ************************************************************************/

#ifndef _STUDENT_H
#define _STUDENT_H
#define N 3
struct student
{
    char name[10];
    int num;
    int age;
    char addr[15];
}s[N], boy, *qq;
void save();
#endif
