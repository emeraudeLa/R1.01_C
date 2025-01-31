#include <stdio.h>
#include <stdlib.h>

void pluspetit (int val1, int val2);

int main (){
    int valeur1, valeur2;
    
    printf("Valeur 1 :");
    scanf("%d",&valeur1);

    printf("Valeur 2 :");
    scanf("%d",&valeur2);

    pluspetit(valeur1,valeur2);

}

void pluspetit (int val1, int val2)
{
    if (val1<=val2)
    { 
        printf("Plus petit : %d\n",val1);
    }
    else
    {
        printf("Plus petit : %d\n",val2);
    }
}