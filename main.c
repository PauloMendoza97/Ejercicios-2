#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fahr;
   printf("FAHRENHEIT\tCELCIUS\n");
   for(fahr=300;fahr>=0;fahr-=20)
   printf(" %3d\t\t %6.1f\n",fahr,(5.0/9.0)*(fahr-32));

}
