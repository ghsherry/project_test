#include <stdio.h>
#include <stdlib.h>
#include "header1.h"

int main()
{
    int x=10;
    int y=20;
    int mul =0;
    int sum=0;
    if (sum_values(x,y,&sum)== ERROR_OK)
    {
        printf("sum of %d & %d=%d \n",x,y, sum);
    }
    else
    {
        printf("in valid address \n");
    }
    if (multiply_values(x,y,&mul)==ERROR_OK)
    {
     printf("mult of %d & %d=%d \n",x,y, mul);
    }else
    {
        printf("in valid address \n");
    }

    return 0;
}
