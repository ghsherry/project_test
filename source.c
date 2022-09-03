#include "header1.h"
#define NULL (void *)(0)
Error_state sum_values (int a , int b, int * value){
 if (value!= NULL)
{
    *value=a+b;
    return ERROR_OK;
}else
{
    return ERROR_NOK;
}

}
Error_state multiply_values(int a , int b, int* value )
{ if (value!= NULL)
{
    *value=a*b;
    return ERROR_OK;
}else
{
    return ERROR_NOK;
}

}

