#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci (int f){

   if ((f == 0) || (f == -1))
   return 1;
   else
   return fibonacci(f-1) + fibonacci(f-2);
}


   int main (void)

       {
           int r, valor;

           printf("0");
           printf("\n1");
           printf("\n1");

           for (valor = 1; valor <= 20 ; valor++){

           r = fibonacci(valor);
           printf("\n%d %d", valor, r);
           }


           return 0;
       }