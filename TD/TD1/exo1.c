#include <stdlib.h>
#include <stdio.h>


int main ()
{
    float nb,retour;
    printf ("Nombre :");
    scanf("%f",&nb);
    retour=nb*nb*nb;
    printf(".3%f => .3%f",nb,retour);
    return EXIT_SUCCESS;
}