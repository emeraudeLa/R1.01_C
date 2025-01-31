#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 11

typedef char tChaine[N];

int longueur (tChaine ch);
void copie(tChaine ch1, tChaine ch2);
bool compare(tChaine ch1, tChaine ch2);


int main (){
    tChaine ch = "TOTOTA";
    tChaine cha = "opi";
    printf("%d\n",longueur(ch));
    //copie(ch, cha);
    printf("les memes ? %d\n",compare(ch,cha));
    return EXIT_SUCCESS;
}

int longueur (tChaine ch)
{
    int compte=0;
    for (int i=0; i < N; i++)
    {
        if(ch[i]!='\0')
        {
            compte = compte + 1;
        }
    }
    return compte;
}

void copie(tChaine ch1, tChaine ch2)
{
   for (int i=0; i < N; i++)
    {
        if(ch1[i]!='\0')
        {
            ch2[i] = ch1[i];
        }
    } 
}

bool compare(tChaine ch1, tChaine ch2)
{
    bool resultat=true;
    for(int i=0; i < N; i++)
    {
        if(ch1[i]!=ch2[i])
        {
            resultat=false;
        }
    }
    return resultat;
}