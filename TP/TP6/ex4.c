#include <stdio.h>
#include <stdlib.h>


float somme (float nb1, float nb2);
float division (float nb1, float nb2);
float soustraction (float nb1, float nb2);
float multiplication (float nb1, float nb2);

int main (){
    printf("valeur attendue : %f valeur obtenue : %f\n",24.4,
    soustraction(somme(4.2,(multiplication(5.3,(somme(division(somme(4.5,1.3),2.0),1.1))))),1.0));
    return EXIT_SUCCESS;
}

float somme (float nb1, float nb2)
{   
    return nb1 + nb2;
}

float division (float nb1, float nb2)
{
    return nb1 / nb2;
}

float soustraction (float nb1, float nb2)
{
    return nb1 - nb2;
}

float multiplication (float nb1, float nb2)
{
    return nb1 * nb2;
}