#include <stdio.h>
#include <stdlib.h>


void calcul(int a, int b, int *quotient, int *reste);

int main (){

   int nb1, nb2;
   int q, r;

   printf("Nb1 : ");
   scanf("%d",&nb1);
   
   printf("Nb2 : ");
   scanf("%d",&nb2);

   
    calcul(nb1, nb2, &q, &r);
    printf("Quotient : %d\nReste : %d\n", q, r);

    return EXIT_SUCCESS;
}

void calcul(int a, int b, int *quotient, int *reste)
{
    *quotient = a / b; 
    *reste = a % b;   
}

/* 
correction vue en cours

void qr(int *adr_a, int *adr_b);

int main(){
    int a = 26, b=7;
    qr(&a,&b);
    printf("quotient : %d, reste : %d\n", a, b);
    return EXIT_SUCESS;
    }

void qr(int *adr_a, int *adr_b)
{
    int c= *adr_a % *adr_b;
    *adr_a = *adr_a / *adr_b;
    *adr_b=c;
}

*/