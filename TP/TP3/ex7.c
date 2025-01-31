
#include <stdio.h>
#include <stdlib.h>

int main (){
    int action;

    printf("(1)Faire action 1\n(2)Faire action 2\n(0)Quitter\n");
    printf("action :");
    scanf("%d",&action);

    while (action !=0){

        while ((action!=1) && (action!=2) && (action!=0)){
            printf("Erreur : vous devez saisir  1, 2, ou 0\n");
            printf("action :");
            scanf("%d",&action);
        }

        switch (action){
            case 1:
                printf("action 1\n");
                break;

            case 2:
                printf("action 2\n");
                break;
            }
            
        printf("action :");
        scanf("%d",&action);
    }
    printf("Au revoir\n");
    return EXIT_SUCCESS;
}
