#include <stdio.h>
#include <stdlib.h>
#include "header1.h"

int main()
{
    int x=10;
    int y=20;
    printf("sum of %d & %d=%d \n",x,y, sum_values(x,y));
    printf("mult of %d & %d=%d \n",x,y, multiply_values(x,y));
    return 0;
}
