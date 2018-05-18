#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv )
{
    FILE *fp;

    char buffer[100] = "esto es un texto dentro del fichero";
    char bufferin[100];

    fp = fopen("D:\\fragan\\##cloneGit\\PunterosEnC-\\memoriaDinamica\\fichero.txt","w");///abre archivo en modo escritura (w)

    fprintf(fp, buffer);
    fprintf(fp,"%s","\nesto es otro texto dentro del fichero.");
    fprintf(fp,"\nesto es otro archivo");

    fclose(fp);
    system("pause");
    system("cls");

    fp= fopen("D:\\fragan\\##cloneGit\\PunterosEnC-\\memoriaDinamica\\fichero.txt","r");///r leer
    if(fp==NULL)
    {
        printf("archivo no escontrado");
    }
    else
    {
        while(!feof(fp))
        {///f find, e end, o on,f file = FeoF
            fgets(bufferin,100,fp);///le pasa lo que lee, hasta donde y
            puts(bufferin);
        }
    }
    return 0;
}
