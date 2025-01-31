#include <stdio.h>
#include <stdlib.h>

void ligne (int m);

int main (){
   int i;
   for (i=0; i<10; i++)
   {
        ligne(i);
        printf("\n");
   }

}

void ligne (int m)
{
    int calcul,j;

    for (j=0; j<m+1; j++)
    {
        calcul=m*j;
        printf("%d \t",calcul);
    }
}