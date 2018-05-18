#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;//4
    char b;//1
}dato;


int main()
{
    /**dato d;
    d.a=5;
    d.b='<';

    dato* pDato;

    pDato=&d;///para direccion de menoria &

    printf("%d--%c",pDato->a, pDato->b || (*pDato).a ,(*pDato).b);///-> se usa para evitar los (),* y el .
    ///&pDato direccion de memoria, sin & la direccion que guarda, * valor de la direccion y (*). accesar al puntero que guarda la estructura y despues al campo
*/


    /**printf("tam: %d\n",sizeof(dato));
    printf("%d-------%c", d.a, d.b);*/

   int i;
    dato l[2]={{1,'a'},{1,'b'}};
    dato* pLista;

    pLista = l;

    for(i=0;i<2;i++)
    {
        printf("%d--%c\n",(pLista+i)->a ,(pLista+i)->b  /**(*(pLista+i)).a ,(*(pLista+i)).b*/);
        ///(*(puntero+i)).a se usa para los datos de un array en estructuras
    }

    return 0;
}
