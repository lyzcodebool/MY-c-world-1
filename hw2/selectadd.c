/*************************************************************************
	> File Name: selectadd.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2017 04:22:05 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>

/*int main()
{
    int result[10] = {0};
    float m[3][2] = {0, 1, 2, 3, 4, 5};
    int num[] = {0, 0, 0, 0, 0};
    char word[] = {'A', 'B', 'A', 'D'};
    int n = strlen(word);
    for(int i = 0; i < n; ++i)
    {
        printf("%c", word[i]);
    }
}*/
//5.9
/*#include<string.h>

int main()
{
    char s[12] = "abcde";
    scanf("%s", s);
    strcat(s, "fgh");
    printf("%s\n", s);
}*/


//5.11
#include<string.h>

int main()
{
    char s[16] = "12345\0\t\t\t";
    printf("%d %d", strlen(s), sizeof(s));
}
