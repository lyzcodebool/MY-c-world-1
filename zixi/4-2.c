/*************************************************************************
	> File Name: 4-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Apr 2017 10:55:00 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 100

/*int Lis(int a[],int alen)
{
   int dis[alen];
   int len = 1;
    for(int i = 0 ; i <alen; ++i)
    {  
        dis[i] = 1;
       for(int j = 0; j < i ; ++j)
            if(a[j]<a[i] && dis[j]+1 > dis[i])
            dis[i] = dis[j] + 1;
        if(dis[i] > len ) len = dis[i];
    }
    return len;
}*/
int Lis(int a[],int alen)
{
       int *dis;
       dis = (int *)malloc(alen*sizeof(int));
       int len = 1;
        for(int i = 0 ; i <alen; ++i)
    {
                dis[i] = 1;
               for(int j = 0; j < i ; ++j)
                    if(a[j] <= a[i] && dis[j]+1 > dis[i])
                    dis[i] = dis[j] + 1;
                if(dis[i] > len ) len = dis[i];       
    }
        free(dis);
        return len;
}
int main()
{
    int *a;
    int alen;
    //int *acopy;
    int i;
    printf("请输入数组长度：\n");
    scanf("%d",&alen);
    a = (int *)malloc(alen * sizeof(int));
    if(!a)
    {
        printf("创建失败！");
        exit(1);
    }
    for(i = 0 ; i < alen ; ++i)
    {
        scanf("%d",&a[i]);
    }
    free(a);
int s = Lis(a,alen);
printf("%d",s);
    return 0;
}
