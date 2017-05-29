/*************************************************************************
	> File Name: newfile.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2017 11:56:58 PM PDT
 ************************************************************************/

#include<stdio.h>
#define putchar(ch) fputc(ch, stdout)
int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if((fp = fopen(argv[1],"rb")) == NULL)
    {
        printf("error");  
        return 0;
    }

    ch = getchar();
    while( ch!= '+')
    {
        fputc(ch, fp);
        ch = getchar();
    }

    rewind(fp);

    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

   /* while(!feof(fp))
    {
        putchar(fgetc(fp));   
    }*/
    
    fclose(fp);                                                     //只有fclose了才能把buffer中的缓冲文件读写
    return 0;
}
