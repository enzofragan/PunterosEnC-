#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;//4
    char b;//1
    char c[3];
    int d;
}dato;


int main()
{
    dato d;
    d.a=5;
    d.b='<';

    printf("tam: %d\n",sizeof(dato));
    printf("%d-------%c", d.a, d.b);
    return 0;
}
