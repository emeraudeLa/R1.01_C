#include <stdio.h>
#include <stdlib.h>

const char PLUS='+', MOINS='-', MULT='*', DIV='/';
const char STOP=':';

void usage();
void calcul(int a, int b, char c);

int main (){
    int nb1, nb2;
    char ope;
    usage();
    do {
        scanf("%d %c %d",&nb1,&ope,&nb2);
        if (ope==STOP)
        { 
            break;
        }
        else
        {
            calcul(nb1,nb2,ope);
        }
    }while(ope!=STOP);

    printf("Au revoir....\n");

}

void usage(){
    printf("Ecrivez une suite d'operations sous la forme:\n<operande> <operande> <operande>\nPour terminer utilisez \":\" comme operateur.\nPar exemple \"0 : 0\" stoppe le programme\n");
}

void calcul(int a, int b, char c){
    int cal;

    if ((c!='+')&&(c!='-')&&(c!='*')&&(c!='/'))
    {
        printf("Operateur inconnu : %c\n",c);
    }
    else
    {
        switch (c) {
            case '+':
                cal=a+b;
                printf("%d + %d = %d\n",a,b,cal);
                break;

            case '-':
                cal=a-b;
                printf("%d - %d = %d\n",a,b,cal);
                break;

            case '*':
                cal=a*b;
                printf("%d * %d = %d\n",a,b,cal);
                break;

            case '/' :
                cal=a/b;
                printf("%d / %d = %d\n",a,b,cal);
                break;
        }
    }
}