/*************************************************************************
	> File Name: de1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2017 08:35:38 PM PDT
 ************************************************************************/

//#include<stdio.h>
/*#define HAHA(a, b) a * b
int main()
{
    int m = HAHA(2+3, 3+5);
    printf("%d", m);
    return 0;
}
结果：16*/

//#include<stdio.h>
#define MERGE(a, b) a##b
//将a 和 b 拼接
/*int main()
{
    printf("%d\n", MERGE(12, 13));

    return 0;
}*/
/*#include <stdio.h>
#define get(a) #a
int main()
{
    // GeeksQuiz is changed to "GeeksQuiz"
    printf("%s", get(GeeksQuiz));
}
// Output: GeeksQuiz*/
//
/*#include<stdio.h>
#define Manyline(i, limit) while(i < limit) \
{ \
    printf("hello!"); \
    i++; \
}

int main()
{
    int i = 0;
    Manyline(i,3);
    return 0;
}*/

/*#include<stdio.h>
#define CHENGFA(a, b) a*b
int main()
{
    printf("%d", 36/CHENGFA(6,6));
    return 0;
}//没有用内联函数*/

/*#include<stdio.h>
inline int square(int a) { return a*a; } //有问题
int main()
{
    int x = 36/square(6);
    printf("%d", x);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
#if 3 >= 2
  printf("Trace Message");
#endif
}*/

#include <stdio.h>
 
int main()
{
   printf("Current File :%s\n", __FILE__ );
   printf("Current Date :%s\n", __DATE__ );
   printf("Current Time :%s\n", __TIME__ );
   printf("Line Number :%d\n", __LINE__ );
   return 0;
}
 
/* Output:
Current File :C:\Users\GfG\Downloads\deleteBST.c
Current Date :Feb 15 2014
Current Time :07:04:25
Line Number :8 */
