#include <stdio.h>
#include <stdlib.h>


int main()
{
    int esp,tab,salto;
    esp=tab=salto=0;
    int c=getchar();
    while(c!=EOF)

    {
        if(c==32)
            esp+=1;
        if(c==9)
            tab++;
        if(c==10)
            salto++;
    c=getchar();
    }
    printf("El numero de espacios ingresados es: %d \n El numero de tabulaciones ingresadas es: %d\n El numero de saltos de linea inresados es: %d", esp,tab,salto);
    return 0;
}
