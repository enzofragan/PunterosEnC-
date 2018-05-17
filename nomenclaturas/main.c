#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///punteros

    int *punteroNumero;
    int numero;

    numero = 66;

    punteroNumero=&numero;

    ///*punteroNumero=&numero;

    ///*punteroNumero = 55;

    printf("%d\n",numero);

    printf("%d\n",&numero);

    printf("%d\n",punteroNumero);

    printf("%d\n",&punteroNumero);

   ///printf("%d",*punteroNumero);

    return 0;
}
