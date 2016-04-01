#include <stdio.h>
/*Escriba de nuevo el programa de conversión de temperatura de
la sección 1.2, de modo que utilice una función para la conversión. */

void conversion(int inicio,int limit);

int main()
{
    conversion(0,300);

    return 0;
}
void conversion(int inicio,int limit)
{
    float C,F;
    C=inicio;
    printf("Celcius   Fahrenheit\n\n");
    while(C<=limit)
    {
        F=((9*C)/5)+32;
        printf("%2.0f\t",C);
        printf("    %.2f\n",F);
        C+=20;
    }
}

