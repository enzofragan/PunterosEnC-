#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///punteros

    int *punteroNumero;
    int numero;
    int numeroDos;

    numero = 66;

    punteroNumero=&numero;
    numeroDos=&numero;///asig de memoria
    printf("a- %d\n",numeroDos);

    numeroDos=*punteroNumero;///asig de valor
    printf("b- %d\n",numeroDos);

    printf("%d\n",numero);

    printf("%d\n",&numero);///%p = notacion de punter o dericcion en exadecimal
    printf(" d-%p\n",punteroNumero);///%p = notacion de punter o dericcion en exadecimal
    printf("c-%p\n",&punteroNumero);///%p = notacion de punter o dericcion en exadecimal
    printf(" d- %d\n",*punteroNumero);///valor puntero y da error cuando el puntero no tiene valor
    printf("%d\n",numeroDos);

    return 0;
}
