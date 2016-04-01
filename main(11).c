#include <stdio.h>
#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */
/* Se puede probar al momento de ingresasr varios tabs, espacios y/o saltos de linea, tambien con codigo ASCI */
int main( )
{
    int  c,ni, nw, nc, state;
    state = OUT;
    ni = nw = nc = 0;
    c = getchar( );
    while (c != EOF)
    {
         ++nc;
    if (c == '\n')
         ++ni;
    if (c == ' ' || c == '\n' || c == '\t')
        state = OUT;
    else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    c = getchar( );
    }
    printf ("%d %d %d\n", ni, nw, nc);
}
