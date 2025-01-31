#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef int tabEntiers[N];

int recherche_dicho_recursif(int valeur, tabEntiers tablo,int debut, int fin);

int main (){
    tabEntiers leTabloTrie = {13, 24, 35, 42, 53, 68, 77, 83, 88, 91} ;
    int val=91;

    printf("Indice de %d : %d\n",val,recherche_dicho_recursif(val,leTabloTrie,0,N-1));
    if (recherche_dicho_recursif(val,leTabloTrie,0,N)==-1)
    {
        printf("%d pas dans le tableau\n",val);
    }
    return EXIT_SUCCESS;
}


int recherche_dicho_recursif(int valeur, tabEntiers tablo,int debut, int fin)
{
    int indiceValeur=-1;
    int milieu;

    milieu=(debut+fin)/2;
    if(tablo[milieu]==valeur)
    {
        indiceValeur=milieu;
    }
    else if(debut <=fin)
    {
        if(tablo[milieu]<valeur)
        {
            debut=milieu+1;
            indiceValeur=recherche_dicho_recursif(valeur,tablo,debut,fin);
        }
        else
        {
            fin=milieu-1;
            indiceValeur=recherche_dicho_recursif(valeur,tablo,debut,fin);
        }
    }
    
    return indiceValeur;
}