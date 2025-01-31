
#include <stdio.h>
#include <stdlib.h>

int main (){
    int nb_etudiants, note_ds, note_tp, i;
    float moyenne;
    char etudiant[20];

    printf("Nombre d'étudiants :");
    scanf("%d",&nb_etudiants);

    for (i=1; i<=nb_etudiants; i++){
        printf("Nom étudiant :");
        scanf("%s",etudiant);
        printf("Note DS :");
        scanf("%d",&note_ds);
        printf("Note TP :");
        scanf("%d",&note_tp);
        moyenne=((note_ds*2) + note_tp)/3;
        printf("Moyenne de %s : %.2f\n",etudiant,moyenne);
    }
    return EXIT_SUCCESS;
}
