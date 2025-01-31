#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fait jusqu'a question 4, faire la 5

const int GAGNE=50;

void faireJouer (char j, int *score);
void afficherResultat (int score1, int score2);

int main (){
    int scoreA = 0;
    int scoreB = 0;
    while ((scoreA<GAGNE)&&(scoreB<GAGNE))
    {
        faireJouer('A',&scoreA);
        if (scoreA>=GAGNE)
        {
            break;
        }
        faireJouer('B',&scoreB);
    }
    afficherResultat(scoreA,scoreB);

    return EXIT_SUCCESS;
}

void faireJouer (char j, int *score)
{
    int lance;
    printf("Lancer du joueur %c : ",j);
    scanf("%d",&lance);
    *score = *score + lance;
    if (lance == 6)
    {   
        printf("Bravo, vous avez fait un 6 !\nVous pouvez rejouer\n");
        faireJouer(j,&*score);
    }
}

void afficherResultat (int score1, int score2)
{
    printf("Score joueur A : %d\nScore joueur B : %d\n",score1,score2);
    if (score1 > score2)
    {
        printf("Vainqueur : Joueur A\n");
    }
    else
    {
        printf("Vainqueur : Joueur B\n");
    }
}