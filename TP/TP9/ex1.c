#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define X 10
#define Y 20

typedef int t_tab2dim[X][Y] ;

void initialiser(t_tab2dim tab);
void afficher (t_tab2dim tab);
bool existe (t_tab2dim tab, int entier);

int main (){
    t_tab2dim leTablo;
    initialiser(leTablo);
    afficher(leTablo);
    if(existe(leTablo, 10))
    {
        printf("Dans le tableau\n");
    }
     
    return EXIT_SUCCESS;
}

void initialiser(t_tab2dim tab)
{
    for (int i=0; i<X; i++)
    {
        for (int j=0; j<Y; j++)
        {
            tab[i][j]=i+j;
        }
    }
}

void afficher (t_tab2dim tab)
{
    for (int i=0; i<X; i++)
    {
        for (int j=0; j<Y; j++)
        {
            printf("%3d",tab[i][j]);
        }
        printf("\n");
    }
}

bool existe (t_tab2dim tab, int entier)
{
    bool estPresent=false;
    bool fin=false;
    do{
        for (int i=0; i<X; i++)
        {
            for (int j=0; j<Y; j++)
            {
                if (tab[i][j]==entier)
                {
                    estPresent=true;
                }
            }
        }
        fin=true;
    }while (estPresent!=true || fin==false);

    return estPresent;
}
