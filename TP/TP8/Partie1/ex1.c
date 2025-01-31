#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef int t_tabEntiers[N+1];
int recherche_sequentielle (int valeur, t_tabEntiers tablo );

int main (){
    t_tabEntiers leTablo = {23, 54, 65, 12, 43, 78, 68, 93, 18, 31};
    int val=43;
    printf("Indice de %d : %d\n",val,recherche_sequentielle(val,leTablo));
    if (recherche_sequentielle(val,leTablo)==-1)
    {
        printf("%d pas dans le tableau\n",val);
    }
    return EXIT_SUCCESS;
}

int recherche_sequentielle (int valeur, t_tabEntiers tablo )
{
    int indiceValeur=-1;
    int i=0;
    while (indiceValeur == -1 && i < N)
    {
        if (tablo[i]==valeur)
        {
            indiceValeur=i;
        }
        i++;
    }
    return indiceValeur;
}
