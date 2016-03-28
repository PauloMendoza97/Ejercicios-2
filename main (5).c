#include <stdio.h>
#include <stdlib.h>

int main()
{
   long ingresar,cont,reemplazo;
   ingresar=getchar();
   cont=1;
   while(ingresar!=10)
   {
       if(ingresar != 32)
       {
           putchar(ingresar);
       }
       if(ingresar == 32 && cont<=1)
       {
         cont++;
         putchar(ingresar);

       }

       ingresar=getchar();
   }
}
