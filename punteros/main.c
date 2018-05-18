#include <stdio.h>
#include <stdlib.h>

int cargarArrays(int*,int);
void mostrarArrays(int*,int);

int main()
{
    int vector[3];
    int* p;

    if(cargarArrays(vector,3))
    {
        printf("carga exitosa");
    }
    else
    {
        printf("error");
    }
    mostrarArrays(vector,3);

    return 0;
}

int cargarArrays(int* array,int tam)
{
    int i;
    int retorno=0;

    if(array!=NULL)
    {
        retorno=1;
        for(i=0;i<tam;i++)
        {
            printf("ingrese un numero: ");
            scanf("%d",array+i);
        }
    }
    return retorno;
}

void mostrarArrays(int* array,int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d\n",*(array+i));
    }
}
