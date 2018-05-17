#include <stdio.h>
#include <stdlib.h>
void intercambiar(int num1, int num2);
void intercambiarPunteros(int *num1, int *num2);
void ponerEnCero(int *num1);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    ponerEnCero(&edadDos);
    ///intercambiar(edadUno,edadDos);
    intercambiarPunteros(&edadUno,&edadDos);
    printf("\n edad 1:%d",edadUno);
    printf("\n edad 2:%d",edadDos);

    return 0;
}
void intercambiar(int num1, int num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}
void intercambiarPunteros(int *num1, int *num2)
{
    int aux;
    aux= *num1;
    *num1=*num2;
    *num2=aux;
}
void ponerEnCero(int *num1)
{
    *num1=0;
}
