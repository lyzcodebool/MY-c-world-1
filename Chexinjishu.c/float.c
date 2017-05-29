/*************************************************************************
	> File Name: float.c
	> Author: 
	> Mail: 
	> Created Time: Mon 08 May 2017 05:20:50 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<float.h>
//展示float数据类型的精确度，存在误差，为近似值

int main()
{
    puts("\nCharacteristics of the type float\n");

    printf("Storage size : %d bytes\n",sizeof(float));
    printf("Smallest positive value : %E\n"
           "Greatest positive value : %E\n",
            FLT_MIN, FLT_MAX);

    puts("\nAn example of float precision :\n");

    double d_var = 12345.6;

    float f_var = (float)d_var;

    printf("The floating-point number""%18.10f\n",d_var);

    printf("has been stored in a variable\n""of type float as a value:""%18.10f\n",f_var);

    printf("The rounding error is : " "%18.10f\n",d_var - f_var);

    return 0;
}
