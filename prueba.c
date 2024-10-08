#include <stdio.h>
#include <stdlib.h>
#include "matrixf.c"

int main()
{
    
    /*Un codigo de ejemplo, como hacer uso de las funciones*/
    float A[4][3]={{1,2,3},{4,5,6},{7,8,9},{11,12,13}};

    float B[3][4]={{1,2,3,10},{4,5,6,11},{7,8,9,12}};
    
    matrix x,y;
   
    x=matrix_init(4,3,A);
    y=matrix_init(3,4,B);
    
  
    matrix_print(x);
    matrix_print(y);
    
    matrix_print(matrix_product(y,x));
    matrix_print(matrix_traspuesta(matrix_product(y,x)));

  
}