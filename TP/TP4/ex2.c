#include <stdio.h>
#include <stdlib.h>


void menu ();

int main (){
    int action=1;

    menu();
    do{
        printf("Action : ");
        scanf("%d",&action);
        switch (action) {
            case 0:
                printf("fin\n");
                break;

            case 1:
                printf("action 1\n");
                break;

            case 2:
                printf("action 2\n");
                break;

            default :
                printf("choix errone\n");
        }

    } while (action !=0);

}

void menu (){
    printf("0 pour arrêter\n1 pour l'action n°1\n2 pour l'action n°2\n");
}
