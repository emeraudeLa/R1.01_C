#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// lors de l'appel dans le terminal, ajouter après -Wall , -lm pour inclure vrmt la librairie math

float fcalcul (int v1, int v2);

int main (){
    int n1, n2;
    printf("n1 :");
    scanf("%d", &n1);
    printf("n2 :");
    scanf("%d", &n2);
    printf("hypoténuse = %f\n", fcalcul(n1, n2));

    return EXIT_SUCCESS;
}
float fcalcul (int v1, int v2)
{
    int nb1,nb2,a;
    nb1 = v1 * v1;
    nb2 = v2 * v2;
    a = nb1 + nb2;
    return sqrtf(a);
}
