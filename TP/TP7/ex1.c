#include <stdio.h>
#include <stdlib.h>

#define N 5
typedef int t_unTableau[N];

int somme(t_unTableau tablo);

int main (){
    t_unTableau monTableau = {5,8,2,3,4};
    printf(" Somme valeurs tab, valeur attendue : 22, valeur obtenue : %d\n",somme(monTableau));
    return EXIT_SUCCESS;
}

int somme(t_unTableau tablo)
{
    int sommeTab;
    for (int i=0; i < N ; i++)
    {
        sommeTab = sommeTab + tablo[i];
    }
    return sommeTab;
}
