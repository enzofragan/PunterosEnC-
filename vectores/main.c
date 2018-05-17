#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero,int cantidad);
int main()
{
    int numeros[3];

    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;
    mostrar(numeros,3);
    return 0;
}
void mostrar(int *puntero,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nnumero:%d",*(puntero+i));///*valor + 1 y sin * direccion de memoria
    }
}
