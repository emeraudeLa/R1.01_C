#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// lors de l'appel dans le terminal, ajouter après -Wall , -lm pour inclure vrmt la librairie math

float fcalcul (int v1, int v2);
void test();

int main (){
    
    
    /*
    int n1, n2;
    for (int i=1; i < 6; i++)
    {   printf("Appel n°%d\n",i);
        scanf("%d", &n1);
        printf("n1 :%d\n",n1);
        scanf("%d", &n2);
        printf("n2 :%d\n",n2);
        printf("hypoténuse = %f\n\n", fcalcul(n1, n2));
    }   */
    
    test();
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

void test(){
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",5.0,fcalcul(3,4));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",1.414,fcalcul(1,1));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",0.0,fcalcul(0,0));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",3.606,fcalcul(2,3));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",10.630,fcalcul(7,8));
}
