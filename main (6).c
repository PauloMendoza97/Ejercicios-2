#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ingresar;
    ingresar=getchar();
    while(ingresar!=10)
    {
        if(ingresar==9) printf("\t");
        if(ingresar==8) printf("\b");
        if(ingresar==92) printf("\\");
        if (ingresar!=9&&ingresar!=12&&ingresar!=92) putchar(ingresar);
     ingresar=getchar();
    }
}
