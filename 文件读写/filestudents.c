/*************************************************************************
	> File Name: filestudents.c
	> Author: 
	> Mail: 
	> Created Time: Wed 10 May 2017 07:47:14 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"student.h"

//记录学生信息：读写

int main(int argc, char *argv[])
{
    int i; 
    FILE *fp, *gp;
    if(argc != 2)
    {
        printf("error: input the argc error!");
    }

    if((fp = fopen(argv[1], "w")) == NULL)
    {
        printf("error: the file <%s> open filded!", argv[1]);
        exit(1);
    }
    printf("please input student information:\n");

    for(i = 0; i < N; ++i)
    {
        scanf("%s%d%d%s", s[i].name, &s[i].num, &s[i].age,s[i].addr);
    }
    save(fp);

    printf("data is saved\n");
    return 0;
}

void save(FILE *fp)
{
    
   /* if((gp = fopen(argv[2], "r")) == NULL)
    {
        printf("error: the file <%s> open filded!", argv[2]);
        exit(1);
    }*/
    for(int i = 0; i < N; ++i)
    {
        if(fwrite(&s[i], sizeof(struct student), 1, fp) == 0)
        {
            printf("file write error!\n");
        }
    }
    

}
