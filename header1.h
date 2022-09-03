#ifndef HEADER1_H_INCLUDED
#define HEADER1_H_INCLUDED
typedef enum
{
    ERROR_OK,
    ERROR_NOK
}Error_state;

Error_state sum_values (int a , int b, int * value);
Error_state multiply_values(int a , int b, int * value);

#endif // HEADER1_H_INCLUDED
