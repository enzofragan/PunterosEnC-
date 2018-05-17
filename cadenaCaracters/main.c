#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[11]="miNombre";
    char *apellido="miApellido";
    char *puntero;

    puntero=nombre;

    printf("\n%s",nombre);
    printf("\n%s",apellido);
    printf("\n%s",puntero);
    int i;
    for(i=0;*(apellido+i)!='\0';i++)
    {
        printf("\n%c",*(apellido+i));///muestra el caracter para abajo ///recorrecada letra del caracter
    }
    printf("\n%s",apellido);

    return 0;
}
