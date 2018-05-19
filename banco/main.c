#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char pais[15];
    char descripcion[10];
}eMonedas;

int cargarMonedas(eMonedas* ,int );
void archivoM(eMonedas*, int);
int mostrar(eMonedas*, int);
int mostrarUno(eMonedas*);

int main()
{
    eMonedas monedas[5]={{1,"peso","argentina"},{2,"real","brasil"},{3,"dolar","EE.UU"},{4,"euro","españa"}};

    ///cargarMonedas(monedas,4);

    if(cargarMonedas(monedas,4))
    {
        printf("carga completa\n");
    }
    else
    {
        printf("error\n");
    }

    if(!mostrar(monedas,5))
    {
        printf("imposible");
    }

    archivoM(monedas,5);

    return 0;
}
int mostrar(eMonedas* monedas,int tam)
{
    int i;
    int retorno=0;

    if(monedas!=NULL && tam>0)
    {
        retorno=1;
        for(i=0;i<tam;i++)
        {
            if(!mostrarUno(monedas+i))
            {
                printf("no se puede mostrar");
            }
        }
    }
    return retorno;
}

int mostrarUno(eMonedas* unaMoneda)
{
    int i;
    if(unaMoneda!=NULL)
    {
        printf("%d----%s----%s\n",unaMoneda->id,unaMoneda->pais,unaMoneda->descripcion);
    }
}

int cargarMonedas(eMonedas* Moneda,int pos)
{
    int i;
    int retorno=0;

    if(Moneda!=NULL && pos>0)
    {
        retorno=1;
        printf("ingrese el id: ");
        scanf("%d",&(Moneda+pos)->id);

        printf("ingrese el pais: ");
        scanf("%s",(Moneda+pos)->pais);

        printf("ingrese la descripcion: ");
        scanf("%s",(Moneda+pos)->descripcion);
    }
    return retorno;
}
void archivoM(eMonedas* monedas, int tam)
{
    FILE* archivo;
    int i;

    archivo=fopen("D:\\fragan\\##cloneGit\\banco\\hola.txt","w");

    if(monedas!=NULL && archivo!=NULL)
    {
        for(i=0;i<tam;i++)
        {
            fprintf(archivo,"%d\n",(monedas+i)->id);
            //printf("%d",(monedas+i)->id);
        }
        fclose(archivo);
    }
    else
    {
        printf("no");
    }
}
